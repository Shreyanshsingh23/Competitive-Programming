#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ln endl
//#define ln "\n"
#define vl vector<lli>
#define all(v) v.begin(), v.end()
#define var1(t) lli t; cin >> t;
#define var2(n,k) lli n,k; cin >> n >> k;
#define var3(n,k,r) lli n,k,r; cin >> n >> k >> r;
#define pb      emplace_back


void solve(){
var1(n);
if(n%25 == 0 || n < 10){
    cout << 0 < ln;
}
string s = to_string(n);
char x = '0', y = '0';
//loop for y
int start = 0,end = 0;
int l = s.length()-1;
bool y5,y0,x7,x2;
for(int i = l ; i > 0; i--){
if(s[i] == 0){
  y0 = true;
  end = i;
}
}

if(y0)

}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
  var1(t);
    while(t--){
       solve();
    }
 return 0;
}

