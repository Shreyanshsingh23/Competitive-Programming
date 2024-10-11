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
string s; cin >>s;
vector<int> v(26);
for(auto &x : v){
    cin >> x;
}

int n= s.size();
char p= 'a';
char s = 0;
while(i < n){
    if(v[i] != '?'){
        p = v[i];
    }
   if(v[i] == '?'){
    while(v[i] != '?'){
        i++;
    }
    s = v[i];
    
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

