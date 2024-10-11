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

 lli dx[4] = {-1,1,-1,1}, dy[4]={-1,-1,1,1};
void solve(){
var2(a,b);
var2(x1,y1);
var2(x2,y2);

set<pair <lli, lli >> s1,s2;

for(int i = 0; i< 4; i++){
    s1.insert({x1+(dx[i]*a), y1+(dy[i]*b)});
    s2.insert({x2+(dx[i]*a), y2+(dy[i]*b)});
    s1.insert({x1+(dx[i]*b), y1+(dy[i]*a)});
    s2.insert({x2+(dx[i]*b), y2+(dy[i]*a)});

}
int ans = 0;
for(auto x : s1){
    if(s2.find(x) != s2.end()){
        ans++;
    }
}

cout << ans << ln;




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

