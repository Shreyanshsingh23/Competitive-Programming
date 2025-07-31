#include <iostream>
#include <vector>
#include <cassert>
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
// int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
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


// Manual reference implementation for testing
bool isDivisibleBy9(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 9 == 0;
}

bool referenceCheck(int n) {
    if (isDivisibleBy9(n)) return true;

    string s = to_string(n);
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            string modified = s.substr(0, i) + "2" + s.substr(i + 1);
            if (isDivisibleBy9(stoll(modified))) return true;
            
            modified = s.substr(0, i) + "3" + s.substr(i + 1);
            if (isDivisibleBy9(stoll(modified))) return true;
        }
    }
    return false;
}


bool check23(int n)
{
    int sum = 0, cnt2 = 0, cnt3 = 0;

    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        if (digit == 2) cnt2++;
        if (digit == 3) cnt3++;
        temp /= 10;
    }

    if (sum % 9 == 0) return true;

    int tempSum = sum;
    int temp2 = cnt2;
    int temp3 = cnt3;
        while (temp2--) {
        tempSum += 2; 
        if (tempSum % 9 == 0) return true;
    }

    tempSum = sum;
    while (temp3--) {
        tempSum += 6; 
        if (tempSum % 9 == 0) return true;
    }
    tempSum = sum;
    for (int i = 0; i <= cnt2; i++) {
        int combinedSum = sum + i * 2; 
        for (int j = 0; j <= cnt3; j++) {
            if ((combinedSum + j * 6) % 9 == 0) return true; 
        }
    }

    return false;
}

bool solve(int n)
{
   if( check23(n))
   {
    return true;
   }
   else
   {
    return false;
   }
   
}

void generateTestCasesAndValidate() {
    vector<int> testCases = {
        // Edge Cases
        0, 1, 9, 18, 81, 999, 
        // Contains 2 and/or 3
        23, 32, 222, 333, 232, 323,
        // Large numbers
        123456789, 987654321, 2222222222, 3333333333,
        // Random cases
        123, 456, 789, 14567
    };



    for (int t : testCases) {
        bool expected = referenceCheck(t);
        bool result = solve(t);  // Use the `solve` function here
        cout << "Test case: " << t << ", Expected: " << (expected ? "YES" : "NO") 
             << ", Got: " << (result ? "YES" : "NO") << "\n";
        assert(expected == result);
    }
}

signed main() {
    generateTestCasesAndValidate();
    cout << "All test cases passed successfully!" << endl;
    return 0;
}
