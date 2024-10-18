#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln endl;
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define sz(x) x.size()
#define vi vector<int>
#define v vector
#define vii vector<vector<int>>                //vii a (n,vi(m,0))
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
// int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}

typedef pair<int, int> pi;

const bool testcase = 1;

int mex(vi& a, int n)
{
    set<int> st {all(a)};
   int res = 0;
   while(st.count(res)) res++;
   return res;
}

void solve()
{
   int1(n)
   vi a(n);
   FOR(i,n) cin >> a[i];

    int operations = 0;
   vi ans;
   
   while(true){
    
    bool ascending = true;
    FOR(i,n-1){
        if(a[i+1] < a[i]) 
        {
            ascending = false;
            break;
        }
    }
        if(!ascending){
            int mexx = mex(a,sz(a));

            FOR(i,n){
                if(i == n-1 or a[i] > a[i+1]){
                    operations++;
                    ans.push_back(i);
                    swap(a[i],mexx);
                    break;
                }
            }
        }
        else{
            break;
        }
    }
    cout <<   operations << ln;
    for(auto& e : ans){
        cout << e << ' ' ;
    }
    cout << ln;


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
