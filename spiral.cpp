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

const bool testcase = 0;


void solve()
{
   int1(n)
   vii a (n,vi(n));
   vi ans;
   for(auto& e : a){
       for(auto& f : e){
           cin>>f;
       }    
   }
    int top = 0, bottom = n-1, left = 0, right = n-1;
    while(top<= bottom and left <= right){
        for(int j = left; j<= right; j++){
            ans.pb(a[top][j]);
        }
        top ++;
        for(int i = top; i<= bottom; i++ ){
            ans.pb(a[i][right]);
        }
        right--;
        if(left<= right){
            for(int j = right; j >= left; --j){
                ans.pb(a[bottom][j]);
            }
            bottom--;
        }
        if(top <= bottom){
            for(int i = bottom; i >= top; --i){
                ans.pb(a[i][left]);
            }
            left++;
        }
    }

    for(auto& e : ans){
        cout<<e<<" ";
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
