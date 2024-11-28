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
#define pb push_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORa(i, a, n) for (int i = a; i < n; i++)
#define F first
#define S second
#define sett(n)          cout<<fixed<<setprecision(n)
#define deb(x) cout << #x << ": " << x << ln;
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
int gcd(int a, int b){if(b == 0)return a; return gcd(b, a % b);}
int poww(int a,int b){if(b == 0)return 1; if(!(b&1)){int ans = poww(a,b/2);return 1ll*ans*ans;} else {int ans =
poww(a,(b-1)/2);return 1ll*ans*ans*a;}}
bool isPrime(int n) { if (n <= 1) return false; if (n <= 3) return true; if (n % 2 == 0 || n % 3 == 0) return false; for (int i = 5; i * i <= n; i = i + 6) if (n % i == 0 || n % (i + 2) == 0) return false; return true; }

typedef pair<int, int> pi;

const int MOD = 1e9 + 7;
const int mod = 998244353;

const bool testcase = 1;


void solve()
{
   int1(n)
   vi a (n);
   FOR(i,n) cin >> a[i];
   
   int i = 0, j = n-1, mxx = 0,isum = 0, jsum = 0;
   vi pref(n), suff(n);
   map<int,int> mp;
  
   for(int i = 0; i< n; ++i)
   {
        if(i == 0)pref[i] = a[i];
        else pref[i] = pref[i-1] + a[i];
        mp[pref[i]] = i;
   }
    // Binary Search
   for(int i = n-1; i >= 0; --i)
   {
        jsum += a[i];
        int l = 0,r = i, ans = 0, mid;
        while(l <= r)
        {
            mid = (l+r) >> 1;
            if(pref[mid] >= jsum)
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        if(ans < i and pref[ans] == jsum)mxx = max(mxx,(ans+1)+(n-i));
   }

   
  
    cout << mxx << ln;

}
// ACCEPTD CODE
//  for(int i = n-1; i >= 0; --i)
//    {
//         if(i == n-1)suff[i] = a[i];
//         else suff[i] = suff[i+1] + a[i];
        
//         if(mp.count(suff[i]))
//         {
//            if(mp[suff[i]] < i) mxx = max(mxx,(n-i)+(mp[suff[i]]+1));
//            else if(mp[suff[i]] >= i)break;
//         }

//    }


// ACCEPTED CODE    
// int i = 0, j = n-1, mxx = 0,isum = a[0], jsum = a[n-1];

//    while(i < j)
//    {
//         if(isum == jsum)
//             mxx = max(mxx,(n-j)+(i+1));
        
//         if(isum <= jsum){
//             i++;
//             isum += a[i];
//         }
//         else if(isum > jsum ){
//             j--;
//             jsum += a[j];
//         }
//    } 

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
