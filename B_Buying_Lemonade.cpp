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
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;

const bool testcase = 1;


void solve()
{
   int2(n,k)
    vector<int> cans(n);
        long long total_cans = 0;
        for (int i = 0; i < n; i++) {
            cin >> cans[i];
            total_cans += cans[i];
        }
        sort(cans.rbegin(), cans.rend());

        long long presses = 0, collected = 0;
        for (int i = 0; i < n; i++) {
            if (collected >= k) break;
            presses++;
            collected += cans[i];
            if (collected >= k) break;
            if (i + 1 < n) {
                presses += (cans[i] - 1);
            }
        }

        cout << presses << endl;
    
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
