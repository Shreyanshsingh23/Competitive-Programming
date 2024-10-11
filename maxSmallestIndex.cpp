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

const bool testcase = 0;

void solve(){
int1(n)
vector<int> v(n);
int mx=  INT_MIN;
for(int i = 0; i< n; i++){
    cin >> v[i];
     mx = max(v[i],mx);
}

for(int i = 0; i< n; i++){
    if(v[i]== mx){
        cout << i;
        return;
    }
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

