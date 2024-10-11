#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ln endl
#define ln "\n"
#define vl vector<lli>
#define all(v) v.begin(), v.end()
#define tc(t) lli t; cin >> t;
#define var(n,k) lli n,k; cin >> n >> k;


int main(){
   
  tc(t);
    while(t--){
        // lli n,k; cin >> n >> k;
        var(n,k);
      
  lli leaves = (k * (2 * n - k + 1)) / 2;
        
   if((leaves & 1) != 1){
    cout << "YES" << ln;
   }
   else{
     cout << "NO" << ln;
   }

    }
 return 0;
}

