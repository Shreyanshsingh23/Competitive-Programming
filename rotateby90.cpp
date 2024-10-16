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

typedef pair<int, int> pi;

const bool testcase = 0;
void transpose(vii& a){
    int n = sz(a);
   
        for(int i = 0; i < n; i++){
            for(int j = i+1;j < n; j++){
            swap(a[i][j],a[j][i]);
        }
    }
   
    
}

void rotateby90(vii& a){
    int n = sz(a);
        for(int i = 0; i < n; i++){
            int k = n-1;
            int j = 0;
            while(j < k){
                swap(a[i][j],a[i][k]);
                j++;
                k--;
            }
        
    }
   
    
}

//7 4 1
//8 5 2
//9 6 3

void solve()
{
    int n; cin >> n;
  vii mat(n,vi(n));

    FOR(i,n){
        FOR(j,n){
            cin >> mat[i][j];
        }
    }
    transpose(mat);
    rotateby90(mat);
   FOR(i,n){
        FOR(j,n){
            cout <<  mat[i][j] << " ";
        }
        cout << ln;
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
