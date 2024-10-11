#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ln endl
//#define ln "\n"
#define vl vector<lli>
#define all(v) v.begin(), v.end()
#define var1(t) lli t; cin >> t;
#define int2(n,k) lli n,k; cin >> n >> k;
#define int3(n,k,r) lli n,k,r; cin >> n >> k >> r;
#define pb      emplace_back
#define FOR(i,n) for(lli i = 0; i< n; i++)


void solve(){
int2(n,q);
vl v(n+1);

vl pref(n+1);

lli sum = 0;

for(int i = 1; i <= n; i++) {
   cin >> v[i];
   sum += v[i];
   pref[i] = pref[i-1];
   pref[i] += v[i];
}

while(q--){
   int3(l,r,k);
  lli ans = pref[n] - (pref[r]-pref[l-1]);

  ans += k*(r-l+1);
   if(ans&1) cout << "YES" << ln;
   else cout << "NO" << ln;
}
return;

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

