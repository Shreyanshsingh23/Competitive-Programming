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

const bool testcase = 1;

void solve(){
int1(n);
vl v(n);
FOR(i,n) cin >> v[i];
int count = 0;
for(int i = 0; i< n; i++){ // from which index subarray will be started

for(int j = 0; i+j < n ; j++){  // till where substring should be made
    bitset<(int)2e5> a;
    for(int k = 0;k< n; k++){  // loop is only for setting the bits of bitset
        a.set(k,v[k]);
    }
    if(a.count() > (n/2)){
        count ++;
    }
}

}

cout << count << ln;

}


signed main(){
  cin.tie(nullptr)->sync_with_stdio(false);
    
  int t = 1;
  testcase and cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

