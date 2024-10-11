#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln endl;
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define vi vector<int>
#define v vector
#define vvi vector<vector<int>>                //vvi a (n,vi(m,0))
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 1;


void solve()
{
   int3(a,b,n)

   vi tools(n);
   FOR(i,n) cin >> tools[i];
   int time = b;
   bool bigTimer = false;

   if(a==1){
    cout << 1 << ln;
    return;
   }

//    for(int i = 0; i< n; ++i){
//     time += min(a - 1, tools[i]);
//    }
int big = 0;
for(int i = 0; i< n;i++){
    if(tools[i] +1 > a) big++;
    else{
        time += tools[i];
    }
}

time += (a-1)*big;
   

//    for(auto e : tools){
//     cout << e << ' ' ;
//    }
//    cout << ln;
   cout << time  << ln;

//    cout << (bigTimer ? time + a -1 : time ) << ln;
   
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
