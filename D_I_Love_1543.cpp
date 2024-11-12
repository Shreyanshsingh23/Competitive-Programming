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

const bool testcase = 1;



void solve()
{
   int2(n,m)

   v<v<char>> a(n,v<char>(m,0));
   for(auto& e : a){
       for(auto& f : e){
           cin >> f;
       }
   }

   v<char> arr;
   int t = 0, b = n-1, l = 0, r = m-1;
   while(t<=b and l<=r){
   
       for(int i = l; i<=r; i++){
           arr.push_back(a[t][i]);
       }
       t++;
       for(int i = t; i<=b; i++){
           arr.push_back(a[i][r]);
       }
       r--;

       if( b >t ) {for(int i = r; i>=l; i--){
           arr.push_back(a[b][i]);
           
       }
       b--;
       
       }
       if(r > l) { for(int i = b; i>=t; i--){
           arr.push_back(a[i][l]);
           
       }
       l++;
       }
   }
   int s = arr.size();
   v<bool> vis(s,false);
   int cnt = 0;

   for(int i = 0; i < s; i++){
       if(i+3 < s and arr[i] == '1' and  arr[i+1] == '5' and arr[i+2]== '4' and arr[i+3] =='3'){
           cnt++;
           vis[i] = vis[i+1] = vis[i+2] = vis[i+3] = true;
       }
       
   }

  

   cout << cnt << ln;
   
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
