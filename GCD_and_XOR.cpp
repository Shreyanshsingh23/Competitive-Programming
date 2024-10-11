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
int2(n,k)
vl v(n);
FOR(i,n) cin >> v[i];
bool flag = true;
for(int i = 0; i< n; i++){
    if(v[i]!= k){
        flag = false;
        break;
    }
}

if(flag){
    cout << 0 << ln;
    return;
}
int s = -1, e = 0;
for(int i = 0; i< n; i++){
if(v[i] != k){
    if(s== -1){
        s = i;
    }
    else{
        e = i;
    }
}
}

if(s==e){
    cout << 1 << ln;
    return;
}

bool g = true, xo = true;
int x = v[s]^k;
for(int i = s; i<= e; i++){
    if(__gcd(v[i],k)) {
        g = false;
    }
    if((v[i] ^ x ) != k){
        xo = false;
    }
}

if(xo || g){ 
    cout << 1  << ln;
    return;
 }
else {
    cout << 2 << ln;
}

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

