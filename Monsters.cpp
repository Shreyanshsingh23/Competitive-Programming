#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
    #define debug(...) cout << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__);
#else
    #define debug(...);
#endif


template <typename T> std::ostream &operator<<(std::ostream &stream, const vector<T> &vec) {for(size_t i = 0; i < vec.size(); i++) { stream << vec[i]; if (i != vec.size() - 1) stream << ' '; }; return stream; } template <typename T> std::istream &operator>>(std::istream &stream, vector<T> &vec) {for (T &x : vec) stream >> x; return stream; } template <typename T, typename U> std::ostream &operator<<(std::ostream &stream, const pair<T, U> &pr) {stream << pr.first << ' ' << pr.second; return stream; } template <typename T, typename U> std::istream &operator>>(std::istream &stream, pair<T, U> &pr) {stream >> pr.first >> pr.second; return stream; } template <typename A, typename B> string to_string(pair<A, B> p); template <typename A, typename B, typename C> string to_string(tuple<A, B, C> p); template <typename A, typename B, typename C, typename D> string to_string(tuple<A, B, C, D> p); string to_string(const string &s) { return '"' + s + '"'; } string to_string(char c) {string s; s += c; return s; } string to_string(const char *s) { return to_string((string)s); } string to_string(bool b) { return (b ? "1" : "0"); } string to_string(vector<bool> v) {bool first = true; string res = "{"; for (int i = 0; i < static_cast<int>(v.size()); i++) {if (!first) {res += ", "; } first = false; res += to_string(v[i]); } res += "}"; return res; } template <size_t N> string to_string(bitset<N> v) {string res = ""; for (size_t i = 0; i < N; i++) {res += static_cast<char>('0' + v[i]); } return res; } template <typename A> string to_string(A v) {bool first = true; string res = "{"; for (const auto &x : v) {if (!first) {res += ", "; } first = false; res += to_string(x); } res += "}"; return res; } template <typename A, typename B> string to_string(pair<A, B> p) { return "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; } template <typename A, typename B, typename C> string to_string(tuple<A, B, C> p) { return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")"; } template <typename A, typename B, typename C, typename D> string to_string(tuple<A, B, C, D> p) { return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")"; } void debug_out() { cout << endl; } template <typename Head, typename... Tail> void debug_out(Head H, Tail... T) {cout << " " << to_string(H); debug_out(T...); }

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln '\n';
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define sz(x)(int) x.size()
#define vi vector<int>
#define v vector
#define vii vector<vector<int>>
#define mpci map<char, int>
#define mpii map<int, int>                //vii a (n,vi(m,0))
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb push_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORa(i, a, n) for (int i = a; i < n; i++)
#define F first
#define S second
#define sett(n)          cout<<fixed<<setprecision(n)
int log(int num , int base){int ans = 0; while(num){num /= base;ans++;} return ans;}//an extra
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
int gcd(int a, int b){if(b == 0)return a; return gcd(b, a % b);}
int poww(int a,int b){if(b == 0)return 1; if(!(b&1)){int ans = poww(a,b/2);return 1ll*ans*ans;} else {int ans =
poww(a,(b-1)/2);return 1ll*ans*ans*a;}}
bool isPrime(int n) { if (n <= 1) return false; if (n <= 3) return true; if (n % 2 == 0 || n % 3 == 0) return false; for (int i = 5; i * i <= n; i = i + 6) if (n % i == 0 || n % (i + 2) == 0) return false; return true; }
int modPow(int a, int b, int m) { int ans = 1; while (b) { if (b & 1) ans = (ans * a) % m; b /= 2; a = (a * a) % m; } return ans; }
int modInv(int n, int m){return modPow(n, m - 2, m); }
int modMul(int a, int b, int m){return ((a % m) * (b % m)) % m;}
int modDiv(int a, int b, int m){return modMul(a, modInv(b, m), m)%m;}
int modAdd(int a, int b, int m){return (a % m + b % m) % m;}
int modSub(int a, int b, int m){return ((a % m) - (b % m) + m) % m;}
#define deb(...)  __f (#__VA_ARGS__, __VA_ARGS__)
typedef pair<int, int> pi;

const int MOD = 1e9 + 7;
const int mod = 998244353;
const int N = 1000010;
int fact [N] ;
int invFact[N] ;
void compFact(){fact[0] = 1;for(int i = 1; i < N; ++i)fact[i] = modMul(fact[i-1],i,MOD);invFact[N-1] = modInv(fact[N-1],MOD);for(int i = N-2; i >= 0; --i)invFact[i] = modMul(invFact[i+1],(i+1),MOD);}

void setIO(string name = ""){ios_base::sync_with_stdio(0);cin.tie(0);if (name.size()) {freopen((name + ".in").c_str(), "r", stdin);freopen((name + ".out").c_str(), "w", stdout);}}
int dx[4] = {-1,1,1,-1}, dy[4] = {1,1,-1,-1};
const bool testcase = 0;


void solve()
{
   int n,m;
   cin >> n >> m;
   v<string> a(n);
   for(int i = 0; i < n; ++i)
   {
        cin >> a[i];
   }
   int sr = 0, sc = 0;
   v<pi> st;
   v<pi> monsters;
   vii ans(n,vi (m,-1));
   vii res(n,vi (m,-1));
   for(int i = 0; i < n; ++i)
   {
        for(int j = 0; j < m; ++j)
        {
            if(i == 0 or i == n-1)
            {  
                if(a[i][j] == '.')st.pb({i,j});
            }
            if(j == 0 or j == m-1)
            {
                if(a[i][j] == '.' and (i != 0 and i != n-1))st.pb({i,j});
            }
            if(a[i][j] == 'M')
            {
                monsters.pb({i,j});
                ans[i][j] = 0;
            }
            if(a[i][j] == 'A')
            {
                sr = i, sc = j;
                if(i == 0 or i == n-1 or j == 0 or j == m-1)
                {
                    cout << "YES" << ln;
                    cout << 0 << ln;
                    return;
                }
            }
        }
   }

   res[sr][sc] = 0;
   queue<pi> q;
   for(auto [x,y]: monsters)
   {
        q.push({x,y});
   }

   while(!q.empty())
   {
        auto [r,c] = q.front();
        q.pop();

        if(r-1 >= 0 and a[r-1][c] == '.' and ans[r-1][c] == -1)
        {
            q.push({r-1,c});
            ans[r-1][c] = ans[r][c] + 1;
        }
        if(r+1 < n and a[r+1][c] == '.' and ans[r+1][c] == -1)
        {
            q.push({r+1,c});
            ans[r+1][c] = ans[r][c] + 1;
        }
        if(c-1 >= 0 and a[r][c-1] == '.' and ans[r][c-1] == -1)
        {
            q.push({r,c-1});
            ans[r][c-1] = ans[r][c] + 1;
        }
        if(c+1 < m and a[r][c+1] == '.' and ans[r][c+1] == -1)
        {
            q.push({r,c+1});
            ans[r][c+1] = ans[r][c] + 1;
        }
   }

   q.push({sr,sc});
   while(!q.empty())
   {
        auto [r,c] = q.front();
        q.pop();

        if(r-1 >= 0 and a[r-1][c] == '.' and res[r-1][c] == -1)
        {
            q.push({r-1,c});
            res[r-1][c] = res[r][c] + 1;
        }
        if(r+1 < n and a[r+1][c] == '.' and res[r+1][c] == -1)
        {
            q.push({r+1,c});
            res[r+1][c] = res[r][c] + 1;
        }
        if(c-1 >= 0 and a[r][c-1] == '.' and res[r][c-1] == -1)
        {
            q.push({r,c-1});
            res[r][c-1] = res[r][c] + 1;
        }
        if(c+1 < m and a[r][c+1] == '.' and res[r][c+1] == -1)
        {
            q.push({r,c+1});
            res[r][c+1] = res[r][c] + 1;
        }
   }

   int dr = -1, dc = -1;
   bool poss = false;
   for(auto [r,c]: st)
   {
        if((ans[r][c] == -1 and res[r][c] != -1) or (res[r][c] != -1 and res[r][c] < ans[r][c]))
        {
            cout << "YES" << ln;
            cout << res[r][c] << ln;
            dr = r; dc = c;
            break;
        }
   }
 
   if(dr == -1)
   {
        cout << "NO" << ln;
        return;
   }
   debug(res)
   string s = "";
   int k = res[dr][dc];

   while(k)
    {
        if(dr - 1 >= 0 and (a[dr-1][dc] == '.' or a[dr-1][dc] == 'A') and  res[dr-1][dc] == k-1)
        {
            s += 'D';
            dr--;
        }
        else if(dr + 1 < n and (a[dr+1][dc] == '.' or a[dr+1][dc] == 'A') and  res[dr + 1][dc] == k-1)
        {
            s += 'U';
            dr++;
        }
        else if(dc - 1 >= 0 and (a[dr][dc-1] == '.' or a[dr][dc-1] == 'A') and  res[dr][dc - 1] == k-1)
        {
            s += 'R';
            dc--;
        }
        else 
        {
            s += 'L';
            dc++;
        }
        k -= 1;

    }
    
    reverse(all(s));
    cout << s << ln;
   

}

signed main()
{
    ShreyanshSinghGautam

    int t = 1;
    testcase and cin >> t;
    // compFact();
    for(int i = 1; i <= t; ++i)
    {
      //  cout << "Case #" << i << ": "; 
     //   cout << (solve() ? "YES": "NO") << ln;
        solve();
    }
    return 0;
}
