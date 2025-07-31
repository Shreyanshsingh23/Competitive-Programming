#include <bits/stdc++.h>
using namespace std;

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
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
int gcd(int a, int b){if(b == 0)return a; return gcd(b, a % b);}
int poww(int a,int b){if(b == 0)return 1; if(!(b&1)){int ans = poww(a,b/2);return 1ll*ans*ans;} else {int ans=poww(a,(b-1)/2);return 1ll*ans*ans*a;}}
typedef pair<int, int> pi;


const bool testcase = 0;
string s,p;
vi a; map<char,int>mp;

bool check(int mid){
    // cout << "mid: " << mid << ln;
    set<int> st;
    FOR(i,mid){
        st.insert(a[i]-1);
    }
    string temp = "";
    for(int i = 0; i< s.size(); i++){
        if(st.count(i))continue;
        temp.push_back(s[i]);
    }
    // cout << temp << ln;
    int i = 0, j = 0;

    while(i < temp.size() and j < p.size()){
        while(i < temp.size() and temp[i] != p[j])i++;
        if(temp[i] == p[j]){
            i++; j++;
        }
    }

    return j == p.size();

}

void solve()
{
 
   cin >> s >> p;
   int prev= 0;

   FOR(i,s.size()){
    int x;cin >> x;
    if(!x or x== prev)break;
    a.pb(x);
    prev = x;
   }

   for(auto e: p) mp[e]++;


   int n = a.size();

   int l = 0, r = n, mid, res = 0;

   while(l +1 < r){
    mid = l + (r-l)/2;

    if(check(mid)){
        res = mid;
        l = mid;
    }
    else r = mid;
   }
//    bool c = check(3);

   cout << l << ln;
   
   
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


// bool check(long long int x) {
//     long long int i = 0, j = 0;
//     string temp = "";
//     unordered_set<long long int> set;
//     for(long long int k=1; k<=x; k++) {
//         set.insert(a[k]-1);
//     }
//     long long int lt = t.length();
//     for(long long int i=0; i<lt; i++) {
//         if(set.find(i) == set.end()) {
//             temp += t[i];
//         }
//     }
//     cout << "temp is: " << temp << endl;
//     long long int ltemp = temp.length(), lp = p.length();
//     while( i < ltemp && j < lp ) {
//         while(i < ltemp && temp[i] != p[j]) i++;
//         if(temp[i] == p[j]) {
//             i++; j++;
//         }
//     }
//     return j == lp;
// }