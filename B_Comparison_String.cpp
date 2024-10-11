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


void solve(){
var1(n);
string s ; cin >> s;

int mx = 1;
int temp = 1;
for (int i = 1; i< n; i++){
    if(s[i] == s[i-1]){
      
        temp ++;
       
    }
    else{
      
        mx = max(mx,temp);
        temp = 1;
    }
}

mx = max(mx,temp);

cout << mx + 1 << endl;

}
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
  var1(t);
    while(t--){
       solve();
    }
 return 0;
}

