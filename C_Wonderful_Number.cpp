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

const bool testcase = 0;
bool palindrome(int& n){
      bitset<32> bits(n);  // Converts the number to a 32-bit binary representation
    int l = 0;
    int r = 31; // 32 bits, so the last index is 31
    while(r > 0 and b[r] == 0){
        r--;
    }
    while (l < r) {
        if (bits[l] != bits[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
bool odd(int& n) 
{
    return (n&1);
}
void solve()
{
   int1(n)
    if(odd(n)and palindrome(n)) cout << "YES" << ln
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
