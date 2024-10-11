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

const bool testCases = 1;

void solve(){
int3(n,k,x);
int sum = 0;

int minn = (k*(k+1))/2;
// cout << "minn: " << minn << ln; 
int maxx = (n*k) - (k*(k-1))/2;
// cout << "maxx: " << maxx << ln; 
if(x >= minn and x <= maxx){
   cout << "YES" << ln;
}
else{
   cout << "NO" << ln;
}

}


signed main(){
  cin.tie(nullptr)->sync_with_stdio(false);
    
  int t = 1;
   testCases and cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

