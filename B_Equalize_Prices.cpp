#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ln endl
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
FOR(i,n) cin >> v[i];

set<pair<lli,lli>> st;

FOR(i,n){
    st.insert({v[i]-k,v[i]+k});
}


lli minn = INT_MAX;
for(auto e:st){
    lli x = e.second;
   minn = min(minn,x);
}


bool isPresent = true;

for( pair<lli,lli> e: st){
    lli x = e.first;
  if(minn < x){
   
    isPresent = false;
    break;
  }
}

lli ans = (isPresent) ? minn : -1 ;
cout <<ans << ln;

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

