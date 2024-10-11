#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ln endl
#define ln "\n"
#define vl vector<lli>
#define all(v) v.begin(), v.end()
#define var1(t) lli t; cin >> t;
#define var2(n,k) lli n,k; cin >> n >> k;
#define var3(n,k,r) lli n,k,r; cin >> n >> k >> r;


int main(){
   
  var1(t);
    while(t--){
        // lli n,k; cin >> n >> k;
        var3(n,d,k);

        vl v(n);

        for(lli i= 0 ; i< k; i++){
            var2(l,r);
            for(lli j = l-1; j < r; j++){
                v[j]++;
            }
        }
      
 
       

    }
 return 0;
}

