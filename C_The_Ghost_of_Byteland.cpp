#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long double
#define ln '\n';
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define sz(x) (int) x.size()
#define vi vector<int>
#define v vector
#define vii vector<vector<int>>                //vii a (n,vi(m,0))
#define pii pair<int,int>
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb push_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORa(i, a, n) for (int i = a; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;

const bool testcase = 1;


void solve()
{
   int1(n)

   cout << round((1 - sqrt(1 + 8*(sqrt(2))*n))/2 )<< ln;
   
   int i = 0, cnt = 0,dist = 0,x= 0,per =0,prev =0;
   v<long double> a;
//    while(cnt < n){
//         dist += (2*(i+1))-1;
//         // cout << "dist " << dist << ln;
//         per = 1.41421356237*dist;
//         // cout << "per " << per << ln;
//         x = dist / 1.41421356237;
//         // cout << "x " << x << ln;

//         if(a.size() > 0 and a[a.size()-1] <= x){
//             cnt += sz(a);
//             prev = sz(a);
//             // cout << "prev " << prev << ln;
//         }
//         else if(size(a) > 0){
//             for(int i = a.size()-1; i >= 0; i--){
//                 if(a[i] <= x){
//                     cnt += i+1;
//                     prev = i+1;
//                     break;
//                 }
//             }

//         }
        
//         else{
//             cnt += max(sz(a),prev);
            
//         }
//         cout << "cnt " << cnt << ln;
//             // cout <<ln;
//         a.pb(per);
//         i++;
//    }
//    cout << i << ln;

    // int cnt = 0;
    // int i = 0;
    // while(cnt < n){
    //     // cout <<  (int) sqrt((i*i)/2);
    //    cnt += (int) sqrt((i*i)/2);
    //     i++;
    // }
    // cout << i -1 << ln;
   

   // cnt += (int) sqrt((i*i)/2);
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
