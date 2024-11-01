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
   int1(n)
   vi a (n),pref(n+1,0);
   FOR(i,n) cin >> a[i];
   for(int i = 1; i<= n; i++){
       pref[i] = pref[i-1] + a[i-1];
    //    cout << pref[i] << " ";
   }
//    cout << ln;


   int m; cin >> m;
   while(m--){
       int1(x)
       bool flag = false;
       int l = 1, r = n;
       while(l <= r){
        int mid = l + (r-l)/2;
        if(pref[mid] <= x){
            if(pref[mid]-a[mid-1] < x and pref[mid] >= x){
                // cout << "first cond" << " ";
                cout << mid << ln;
                flag = true;
                break;
            }
            if(pref[mid] < x and pref[mid]+ a[mid] >= x){
                // cout << "second cond" << " ";
                cout << mid+1 << ln;
                flag = true;
                break;
            }
            l = mid+1;
        }else{
            r = mid-1;
        }
       }

      if(!flag) cout << (l > n? n:l) << ln;
   }
   
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
