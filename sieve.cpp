#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln endl;
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define vi vector<int>
#define v vector
#define vvi vector<vector<int>>                //vvi a (n,vi(m,0))
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 0;
bool sieve(int& t){
    vi primes(31,1);

    for(int i= 2; i*i <= 30; i++){
        if(primes[i]== 1){
            for(int j = i*i;j <= 30; j+= i){
                primes[j] = 0;
            }
        }
    }

    

   return primes[t]==1;

}

void solve()
{
//    int n;
//    cin >> n;

   for(int i = 2; i<= 30; i++){
    if(sieve(i)){
         cout << i << ", ";
    }
    
   }

}

// bool sieve(int t){
//     vi primes(31, 1);

//     for (int i = 2; i * i <= 30; i++) {
//         if (primes[i] == 1) {
//             for (int j = i * i; j <= 30; j += i) {
//                 primes[j] = 0;
//             }
//         }
//     }

//     return primes[t] == 1;
// }

// void solve() {
//    for (int i = 2; i <= 30; i++) {
//         if (sieve(i)) {
//             cout << i << ", ";
//         }
//    }
//    cout << endl;
// }

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
