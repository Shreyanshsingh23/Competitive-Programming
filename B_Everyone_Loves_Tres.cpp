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


bool is_divisible_by_33(const string& num) {
    int sum_digits = 0;
    int odd_sum = 0;
    int even_sum = 0;

    for (int i = 0; i < num.size(); i++) {
        int digit = num[i] - '0';
        sum_digits += digit;
        if (i % 2 == 0) {
            odd_sum += digit; 
        } else {
            even_sum += digit; 
        }
    }

    bool divisible_by_3 = (sum_digits % 3 == 0);
    bool divisible_by_11 = abs(odd_sum - even_sum) % 11 == 0;

    return divisible_by_3 && divisible_by_11;
}

bool is_divisible_by_66(const string& num) {
    return (num.back() - '0') % 2 == 0 && is_divisible_by_33(num);
}


void solve()
{
   int1(n)
//    string s = "";

if (n == 1 || n == 3) {
        cout << -1 << ln;
        return;
    }
    
    
    if (!(n&1)) {
        for(int i = 0; i< n-2; i++){
            cout << 3 ;
        }
        cout << 66 << ln;
        return;
        }
    string base_number;
        for (int i = 0; i < n - 3; i++) {
            base_number += '3';
        }
        base_number += "66";

        
          for (int i =  base_number.size() - 2; i >= 0; i--) {
            string candidate = base_number;
            candidate.insert(i, 1, '3');  
             if (is_divisible_by_66(candidate)) {
                cout << candidate << ln;
                return;
            }
        }

        for (int i = base_number.size() - 2; i >= 0; i--) {
            string candidate = base_number;
            candidate.insert(i, 1, '6');  
             if (is_divisible_by_66(candidate)) {
                cout << candidate << ln;
                return;
            }
        }

       
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
