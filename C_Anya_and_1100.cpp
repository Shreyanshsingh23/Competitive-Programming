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


bool check1100(const string &s, int pos) {
    if (pos < 0 || pos + 3 >= s.size()) return false;
    return (s[pos] == '1' && s[pos+1] == '1' && s[pos+2] == '0' && s[pos+3] == '0');
}

void solve() {
    string s; cin >> s;
    int n = s.size();
    int q; cin >> q;
    
    int count1100 = 0;
    for (int i = 0; i <= n - 4; i++) {
        if (check1100(s, i)) count1100++;
    }
    
    while (q--) {
        int i, v; cin >> i >> v;
        i--;
        char new_char = '0' + v;
        
        for (int j = i - 3; j <= i; j++) {
            if (check1100(s, j)) count1100--;
        }

        s[i] = new_char;
        
        for (int j = i - 3; j <= i; j++) {
            if (check1100(s, j)) count1100++;
        }

        cout << (count1100 > 0 ? "YES" : "NO") << ln;
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


