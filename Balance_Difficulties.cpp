#include<bits/stdc++.h>
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
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;

const bool testcase = 1;


void solve()
{
   int2(n,x)
    vi b(n),c(n);
   FOR(i,n) cin>> b[i];

   int diff = -1;
    bool flag = false;

    while(!flag){
        diff++;
        c[0] = b[0] + diff;
        for(int i= 1; i< n; i++){
            c[i] = b[i]+diff;
            if(c[i] - c[i-1]> x){
                break;
            }
            if(i == n-1){
                flag = true;
                break;
            }
        }
    }

    cout << diff << ln;
    for(auto& e:c){
        cout << e << ' ';
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
