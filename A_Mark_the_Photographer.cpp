#include<bits/stdc++.h>
using namespace std;

#define int  long long
#define ln endl;
//#define ln "\n"
#define vl vector<int>
#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n,k) int n,k; cin >> n >> k;
#define int3(n,k,r) int n,k,r; cin >> n >> k >> r;
#define pb      emplace_back
#define FOR(i,n) for(int i = 0; i< n; i++)


void solve(){
int2(n,x);

vl v(2*n);
FOR(i,2*n) cin >> v[i];

sort(all(v));


for(int i = 0; i< n; i++){
    //cout << v[n+i] << "- " << v[i] << "= " << (v[n+i]-v[i]) << ln;
    if((v[n+i]-v[i]) < x){
        cout << "NO" << ln;
        return;
    }
}

cout << "YES" << ln;
}


signed main(){
  cin.tie(nullptr)->sync_with_stdio(false);
    
  int t = 1;
  cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

