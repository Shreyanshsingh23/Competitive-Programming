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
var2(n,k);
if(n<k || k==1){
    cout << n << ln;
    return;
}
lli originalk = k;
lli count = 0;
while(n >= k){
   
  while(k*originalk<= n){
    k *= originalk;
  }
  
  n -= k;
  count ++;
   k = originalk;

  //cout << "N"<< n << " k" << k << " cnt " << count << ln;
  }

lli ans = count + n;

cout << ans << ln;




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

