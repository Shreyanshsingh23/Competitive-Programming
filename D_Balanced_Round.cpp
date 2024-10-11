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
#define FOR(i,n) for(lli i = 0; i< n; i++)


void solve(){
var2(n,k);
vl v(n);
FOR(i,n)cin >> v[i];

sort(all(v));

lli mxCount = 0;
lli temp = 1;
FOR(i,n-1){
  if(v[i+1]-v[i] <= k){
    temp ++;
  }
  else{
    mxCount = max(mxCount,temp);
    temp = 1;
  }
}
// this is done for that case when array ends so mxCount does not gets updated and it should be updated because it is possible that last subsequence would be largest in size.
mxCount = max(mxCount,temp);
lli ans = n-mxCount;
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

