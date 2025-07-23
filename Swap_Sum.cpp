#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
    #define debug(...) cout << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__);
#else
    #define debug(...);
#endif

template <typename T> std::ostream &operator<<(std::ostream &stream, const vector<T> &vec) {for(size_t i = 0; i < vec.size(); i++) { stream << vec[i]; if (i != vec.size() - 1) stream << ' '; }; return stream; } template <typename T> std::istream &operator>>(std::istream &stream, vector<T> &vec) {for (T &x : vec) stream >> x; return stream; } template <typename T, typename U> std::ostream &operator<<(std::ostream &stream, const pair<T, U> &pr) {stream << pr.first << ' ' << pr.second; return stream; } template <typename T, typename U> std::istream &operator>>(std::istream &stream, pair<T, U> &pr) {stream >> pr.first >> pr.second; return stream; } template <typename A, typename B> string to_string(pair<A, B> p); template <typename A, typename B, typename C> string to_string(tuple<A, B, C> p); template <typename A, typename B, typename C, typename D> string to_string(tuple<A, B, C, D> p); string to_string(const string &s) { return '"' + s + '"'; } string to_string(char c) {string s; s += c; return s; } string to_string(const char *s) { return to_string((string)s); } string to_string(bool b) { return (b ? "1" : "0"); } string to_string(vector<bool> v) {bool first = true; string res = "{"; for (int i = 0; i < static_cast<int>(v.size()); i++) {if (!first) {res += ", "; } first = false; res += to_string(v[i]); } res += "}"; return res; } template <size_t N> string to_string(bitset<N> v) {string res = ""; for (size_t i = 0; i < N; i++) {res += static_cast<char>('0' + v[i]); } return res; } template <typename A> string to_string(A v) {bool first = true; string res = "{"; for (const auto &x : v) {if (!first) {res += ", "; } first = false; res += to_string(x); } return res; } template <typename A, typename B> string to_string(pair<A, B> p) { return "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; } template <typename A, typename B, typename C> string to_string(tuple<A, B, C> p) { return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")"; } template <typename A, typename B, typename C, typename D> string to_string(tuple<A, B, C, D> p) { return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")"; } void debug_out() { cout << endl; } template <typename Head, typename... Tail> void debug_out(Head H, Tail... T) {cout << " " << to_string(H); debug_out(T...); }

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
#define mpii map<int, int>                
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
int log(int num , int base){int ans = 0; while(num){num /= base;ans++;} return ans;}
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
const bool testcase = 1;

vi a, b;
int k;

struct node
{
    int scr;
    int swp;
    bool norExt;
    bool swpExt;

    node() : scr(0LL), swp(0LL), norExt(false), swpExt(true) {}

    node(int sn, int ss, bool en, bool es) : scr(sn), swp(ss), norExt(en), swpExt(es) {}
};

node operator+(const node &left, const node &right)
{
    node res;
    res.scr = left.scr + (left.norExt ? right.swp : right.scr);
    res.swp = left.swp + (left.swpExt ? right.swp : right.scr);
    res.norExt = left.norExt ? right.swpExt : right.norExt;
    res.swpExt = left.swpExt ? right.swpExt : right.norExt;
    return res;
}

node calc(int idx)
{
    int ns, ss;
    bool en, es;

    if (a[idx] + k < b[idx])
    {
        ns = b[idx];
        en = true;
    }
    else
    {
        ns = a[idx];
        en = false;
    }

    if (b[idx] + k < a[idx])
    {
        ss = a[idx];
        es = false;
    }
    else
    {
        ss = b[idx];
        es = true;
    }
    return node(ns, ss, en, es);
}

template <typename t>
struct segtree
{
    t *tree;
    const int n;
    const t identity;

private:
#define tm ((tl + tr) >> 1)
#define lcid ((tid << 1) + 1)
#define rcid lcid + 1
#define leftchild lcid, tl, tm
#define rightchild rcid, tm + 1, tr

    void update(int tid, int tl, int tr, int idx, t val)
    {
        if (tl == tr)
        {
            tree[tid] = val;
            return;
        }

        if (idx <= tm)
            update(leftchild, idx, val);
        else
            update(rightchild, idx, val);

        tree[tid] = tree[lcid] + tree[rcid];
    }

    t query(int tid, int tl, int tr, int l, int r)
    {
        if (l > tr or r < tl)
            return identity;
        if (l <= tl and tr <= r)
            return tree[tid];
        return query(leftchild, l, r) + query(rightchild, l, r);
    }

#undef tm
#undef lcid
#undef rcid
#undef leftchild
#undef rightchild
public:
    segtree(int n, t identity) : n(n), identity(identity)
    {
        tree = new t[4 * n];
        for (int i = 0; i < 4 * n; ++i)
        {
            tree[i] = identity;
        }
    }

    ~segtree()
    {
        delete[] tree;
    }

    void update(int idx, t val)
    {
        update(0, 0, n - 1, idx, val);
    }

    t query(int l, int r)
    {
        return query(0, 0, n - 1, l, r);
    }
};

void solve()
{
    int n, q;
    cin >> n >> k;

    a.assign(n, 0);
    b.assign(n, 0);

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    node nd;
    segtree<node> st(n, nd);

    for (int i = 0; i < n; ++i)
    {
        st.update(i, calc(i));
    }

    cin >> q;
    while (q--)
    {
        int type, p;
        int x;
        cin >> type >> p >> x;
        p--;

        if (type == 1)
            a[p] = x;
        else
            b[p] = x;

        st.update(p, calc(p));

        node root = st.query(0, n - 1);
        cout << root.scr << ln;
    }
}

signed main()
{
    ShreyanshSinghGautam

    int t = 1;
    // compFact();
    testcase and cin >> t;
    for(int i = 1; i <= t; ++i)
    {
        //  cout << "Case #" << i << ": "; 
        //   cout << (solve() ? "YES": "NO") << ln;
        solve();
    }
    return 0;
}
