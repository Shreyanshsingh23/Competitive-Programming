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
#define pb      emplace_back


void solve(){
var1(n);

if(n&1){
   cout << 1  << ln;
   return;
}
if(n==2){
    cout << 2  << ln;
   return;
}
int lastdivisor = 0;
for(int i = 1; i<= n; i++){
   if(n%i != 0){
      break;
   }
   lastdivisor = i;
}

cout << lastdivisor << endl;

}

int main(){
   
  var1(t);
    while(t--){
      solve();
    }
 return 0;
}

