#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
    #define debug(...) cout << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__);
#else
    #define debug(...);
#endif


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
const bool testcase = 1;

void solve()
{
   int1(n)
   string a;
    cin >> a;

    if (n <= 2) {
        cout << n << ln;
        return;
    }
    vi prezero(n + 1);
    vi preone(n + 1);

    int lastz = -1;
    for (int i = 0; i < n; ++i) {
        prezero[i] = lastz;
        if (a[i] == '0') {
            lastz = i;
        }
    }
    prezero[n] = lastz;

    int lastone = -1;
    for (int i = 0; i < n; ++i) {
        preone[i] = lastone;
        if (a[i] == '1') {
            lastone = i;
        }
    }
    preone[n] = lastone;

    int len = 0;
    for (int j = 0; j < n; ++j) {
        int pj = -1;
        int k1, k2, k3, k4;

        k4 = preone[j + 1];
        if (k4 != -1) 
        {
        k3 = preone[k4];
        if (k3 != -1) 
        {
            k2 = prezero[k3];
            if (k2 != -1) 
            {
                k1 = prezero[k2];
                if (k1 != -1) 
                {
                    pj = max(pj, k1);
                }
            }
        }
    }
        
        k4 = prezero[j + 1];
        if (k4 != -1) {
            k3 = prezero[k4];
            if (k3 != -1) {
                k2 = preone[k3];
                if (k2 != -1) 
                {
                    k1 = preone[k2];
                    if (k1 != -1) 
                    {
                        pj = max(pj, k1);
                    }
                }
            }
        }
        
        k4 = prezero[j + 1];
        if (k4 != -1) {
            k3 = preone[k4];
            if (k3 != -1) 
            {
                k2 = preone[k3];
                if (k2 != -1) 
                {
                    k1 = prezero[k2];
                    if (k1 != -1) {
                        pj = max(pj, k1);
                    }
                }
            }
        }
        
        k4 = preone[j + 1];
        if (k4 != -1) 
        {
            k3 = prezero[k4];
            if (k3 != -1) 
            {
                k2 = prezero[k3];
                if (k2 != -1) {
                    k1 = preone[k2];
                    if (k1 != -1) 
                    {
                        pj = max(pj, k1);
                    }
                }
            }
        }

        int cur = j - pj;
        len = max(len, cur);
    }
    
    cout << len << ln;
   
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
