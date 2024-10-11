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
string s, t; cin >> s >> t;
bool flag = false;
if(s==t){
    cout << 0 << ln;
    flag = true;
}
else
{
    for(int i = 0; i < min(s.size(),t.size()); i++){
        if(s[i] != t[i]){
            cout << i+1 << ln;
            flag = true;
            break;
        }
    }
}

if(!flag){
    cout << min(s.size(),t.size()) + 1 << ln;
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

