#include<bits/stdc++.h>
using namespace std;

#define lli long long int

#define ln endl
#define vl vector<lli>
#define all(v) v.begin(), v.end()


int main(){
   
   lli t; cin >> t;
    while(t--){
        lli n,k; cin >> n>>k;
        vl v(n);
        lli gold =0;
        lli ans = 0;
         for(lli i = 0; i< n; i++){
          cin >> v[i];
          if(v[i] >= k){
            gold += v[i];
          }
          else if(v[i]==0){
            if(gold > 0){
                ans ++;
                gold--;
            }
          }

          
        }
       cout << ans << ln;


    }
 return 0;
}