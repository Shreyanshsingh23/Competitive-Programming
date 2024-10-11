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
var2(n,m);

vector<pair<int,char>> v(m);

FOR(i,m){
cin >> v[i].first >> v[i].second;
}

// for(int i = 0; i< m; i++){
//     cout << v[i].first << " " << v[i].second << ln;
// }

 vector<bool> b(n+1,false);

for(auto e: v){
    if(!b[e.first] && e.second == 'M'){
        cout << "Yes" << ln;
        b[e.first]  = true;
    }
    else{
        cout << "No" << ln;
    }
}


}


int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
  
  int t = 1;
  //cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

