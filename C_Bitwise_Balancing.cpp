#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ln endl
//#define ln "\n"
#define vl vector<lli>
#define all(v) v.begin(), v.end()
#define var1(t) lli t; cin >> t;
#define var2(n,k) lli n,k; cin >> n >> k;
#define var3(n,k,r) lli n,k,r; cin >> n >> k >> r;
#define pb      emplace_back
#define FOR(i,n) for(lli i = 0; i< n; i++)


void solve(){
var3(b,c,d);

 int a = 0; // This will store the value of a that we are constructing
    
    // Iterate over each bit position (assuming 30 bits is enough, given constraints)
    for (int i = 0; i < 30; ++i) {
        // Extract the i-th bit from b, c, and d
        int b_bit = (b >> i) & 1;
        int c_bit = (c >> i) & 1;
        int d_bit = (d >> i) & 1;
        
        // We want to find the i-th bit of a such that (a | b) - (a & c) == d_bit
        // We check different possible combinations of a_bit:
        
        // Case 1: If a_bit is 0
        int or_0 = b_bit;  // a | b when a_bit is 0 is just b_bit
        int and_0 = 0;     // a & c when a_bit is 0 is 0
        if (or_0 - and_0 == d_bit) {
            // This bit can be 0 in a, continue
            continue;
        }
        
        // Case 2: If a_bit is 1
        int or_1 = 1 | b_bit;  // a | b when a_bit is 1
        int and_1 = 1 & c_bit; // a & c when a_bit is 1
        if (or_1 - and_1 == d_bit) {
            // This bit should be 1 in a
            a |= (1 << i);
        } else {
            // No valid bit found for this position, hence no solution
            cout << -1 << ln;
            return;
        }
    }
    
    // If we've constructed a valid a, return it
    cout <<  a << ln;


}


int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
  
  int t = 1;
  cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

