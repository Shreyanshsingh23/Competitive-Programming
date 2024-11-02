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
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;

const bool testcase = 1;
bool cmp(pi& a,pi& b){
     int sum1 = a.first + a.second;
     int sum2 = b.first + b.second;
        if(sum1 != sum2){
            return sum1 < sum2;
        }

        else return min(a.first,a.second)  < min(b.first,b.second);
    }


void solve()
{
   int1(n)
    v<pi> a(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        a[i] = {x, y};
    }
    
    sort(a.begin(), a.end(),cmp);
    
    for (int i = 0; i < n; ++i) {
        cout << a[i].first << " " << a[i].second << " ";
    }
    cout << endl;
   
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
