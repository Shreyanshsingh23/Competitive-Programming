#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ln endl;
// #define ln "\n"
#define vl vector<int>
#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 1;

void solve()
{
   int2(n,m)
    vector<vl> v(n, vl(m,2));
    int index = 0;
    int minn = min(n,m);
    
   
    if(n>m){
        for(int i = 0; i< m; i++){
            v[i][i] = 3;
        }
        for(int i = m; i< n; i++){
                v[i][0] = 3;
            }
    }
    else{
         for(int i = 0; i< m; i++){
            v[i][i] = 3;
        }
         for(int i = m; i< n; i++){
                v[0][i] = 3;
            }
    }
    

    FOR(i,n){
        FOR(j,m){
            cout << v[i][j] << " ";
        }
        cout << ln;
    }
}


signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t = 1;
    testcase and cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}