#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ln endl;
// #define ln "\n"
#define vl vector<int>
#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 1;
bool prime(int& n){
    if(n==2 or n==3) return true;
    if(n==1) return false;
    if(!(n&1)) return false;
    int i = 2;
    while(i*i <= n){
        if(n%i == 0){
            return false;
        }
        i++;
    }

    return true;
}
void solve()
{
   int1(n)
   if(prime(n)) cout << "YES" << ln
   else cout << "NO" << ln;
}

signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t = 1;
    testcase and cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
