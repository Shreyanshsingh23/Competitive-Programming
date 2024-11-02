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

void traverseSpiral(const vector<vector<char>>& a, int n, int m, int &ans, const string& target) {
    vector<pair<int, int>> directions = {
        {0, 1},  // right
        {1, 0},  // down
        {0, -1}, // left
        {-1, 0}  // up
    };

    for (int start = 0; start < 4; ++start) {  // Try each corner as a starting point
        int t = 0, b = n - 1, l = 0, r = m - 1;
        string s;

        // Adjust starting corner
        if (start == 1) {  // start from top-right
            swap(directions[0], directions[2]);  // Reverse right/left
            l = m - 1, r = 0;
        }
        else if (start == 2) {  // start from bottom-left
            swap(directions[1], directions[3]);  // Reverse down/up
            t = n - 1, b = 0;
        }
        else if (start == 3) {  // start from bottom-right
            swap(directions[0], directions[2]);
            swap(directions[1], directions[3]);
            t = n - 1, b = 0;
            l = m - 1, r = 0;
        }

        while (t <= b && l <= r) {
            s.clear();

            // Top row or left column (depends on start)
            for (int i = l; i <= r; ++i) s += a[t][i];
            for (int i = t + 1; i <= b; ++i) s += a[i][r];
            if (t < b) for (int i = r - 1; i >= l; --i) s += a[b][i];
            if (l < r) for (int i = b - 1; i > t; --i) s += a[i][l];
            
            size_t pos = s.find(target);
            while (pos != string::npos) {
                ans++;
                pos = s.find(target, pos + 1);
            }
        }
    }
}

void solve()
{
   int2(n,m)

   v<v<char>> a(n,v<char>(m,0));
   for(auto& e : a){
       for(auto& f : e){
           cin >> f;
       }
   }

     string target = "1543";
    int ans = 0;

    traverseSpiral(a, n, m, ans, target);

    cout << ans << ln;
  
   
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
