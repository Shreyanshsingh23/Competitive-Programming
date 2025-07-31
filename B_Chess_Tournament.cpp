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
#define vii vector<vector<int>>                //vii a (n,vi(m,0))
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
   int1(n)
   string s; cin>> s;
   map<char,int> mp;

   for(int i = 0; i< n;i++){
    mp[s[i]]++;
   }

    v<bool> b(n,true);
   if(mp['2']< 3 and mp['2'] > 0) 
    {
        cout << "NO" << ln;
        return;
    }
    else{
        cout << "YES" << ln;
    }
   v<v<char>> a (n,v<char>(n,'='));

    for(int i = 0 ; i< n;i++){
       a[i][i] = 'X';
        if(i < n-1 and s[i]== '2'){
            for(int j = i+1; j <n ;j ++){
                if(s[j] == '2'){
                    a[i][j] = '+';
                    a[j][i] = '-';
                    b[i] = false;
                }
            }

            if(b[i] == false){
                continue;
            }
            else{
                for(int j = 0; j< i-1; j++){
                 if(s[j] == '2'){
                    a[i][j] = '+';
                    a[j][i] = '-';
                    b[i] = false;
                }
            }
            }
        }
        else if(i == n-1 and s[i]== '2')
        {
            for(int j = 0; j< i-1; j++){
                 if(s[j] == '2'){
                    a[i][j] = '+';
                    a[j][i] = '-';
                    b[i] = false;
                }
            }
        }
    }

    for(auto& x : a){
        for(auto& e: x){
            cout << e ;
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
