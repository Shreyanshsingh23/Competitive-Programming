#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln '\n';
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define sz(x) x.size()
#define vi vector<int>
#define v vector
#define vii vector<vector<int>>                //vii a (n,vi(m,0))
#define pii pair<int,int>
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORa(i, a, n) for (int i = a; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;

const bool testcase = 0;


void solve()
{
   int2(n,m)
   vi a (n),pref(n);
   
   FOR(i,n){
     cin >> a[i];
   }
//    pref[0] = a[0];
//    FORa(i,1,n){
//      pref[i] = pref[i-1] + a[i];
//    }

//    int cnt = 0;
//    for(int i = n-1; i>= 0; i--){
//     cnt += pref[i]%m;
//     for(int j = i-1; j>= 0; j--){
//         cnt += (pref[i]-pref[j])%m;
//     }
    
//    }

//    cout << cnt << ln;


   map<int, int> remainder_count;
    remainder_count[0] = 1; // Start with a remainder of 0 for initial case

    int prefix_sum = 0, result = 0;

    // Calculate prefix sums and count contributions modulo m
    for (int i = 0; i < n; i++) {
        // Update prefix sum
        prefix_sum = (prefix_sum + a[i]) % m;

        // Adjust negative remainders
        if (prefix_sum < 0) {
            prefix_sum += m;
        }

        // Add to result the sum of all subarrays ending here with the same modulo
        result += prefix_sum;

        // Add occurrences of previous prefix mod to handle all valid subarrays
        result += remainder_count[prefix_sum] * prefix_sum;

        // Increment count of this remainder for future subarrays
        remainder_count[prefix_sum]++;
    }

    cout << result << ln;
}

signed main()
{
    ShreyanshSinghGautam

    int t = 1;
    testcase and cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
