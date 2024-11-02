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
    string s; cin >> s;
    int n = s.size();
    map<char,int> mp;
    FOR(i,n) mp[s[i]]++;

    bool h1 = false,e1 = false,l1 = false,l2 = false,o1 = false;
    if(mp['h'] > 0 and mp['e'] > 0 and mp['l'] > 1 and mp['o'] > 0){
        FOR(i,n){
        if(l2 and !o1 and s[i] == 'o'){
            o1 = 1;
        }
        else if(l1 and !l2 and s[i] == 'l'){
            l2 = 1;
        }
        else if(e1 and !l1 and s[i] == 'l'){
            l1 = 1;  
        }
        else if(h1 and !e1 and s[i] == 'e'){
            e1 = 1;
        }
        else if(!h1 and s[i] == 'h'){
            h1 = 1;
        }
        }
    } 

    if(h1 and e1 and l1 and l2 and o1){
        cout << "YES" << ln;
    }
    else{
        cout << "NO" << ln;
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

