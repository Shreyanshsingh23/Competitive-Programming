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


void solve(){
lli n; cin >> n;

if(n == 1){
    cout << 0 << ln;
    return;
}

int count = 0;
if(n%6 == 3 || n%6 == 0){
     
    while(n != 1){
        count ++;
       
      if(n%6 == 3 || n%6 == 0) {
         if((n%6) == 3){
            n *= 2;
           
           
        }
        else{
            n /= 6;
           
        }
        }
        else{
            cout << -1 << ln;
            return;
        }

    }
    cout  << count << ln;
}
else{
   cout << -1 << ln;
}
}

int main(){
   
  var1(t);
    while(t--){
      solve();
    }
 return 0;
}

