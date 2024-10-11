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
#define FOR(i,n) for(lli i = 0; i< n; i++)


void solve(){
var1(n);
var2(m,k);

vl a(n);
lli left = k;
FOR(i,n) { 
 cin >> a[i];
 left -= a[i];
}
vl b = a;

sort(all(b),greater<lli>());
 
 lli bigger = b[m-1];


for(int i = 0; i< n ;i++){
    if(min(left,bigger-a[i]+1)+a[i] <= bigger){
        cout << -1 << " ";
    }
    else if(a[i] > bigger){
        cout << 0 << " ";
    }
    else{ 
        
    lli req = min(left,(bigger-a[i]+1));
    lli ans = 0;
    if(left-req > req){
        ans = left-(b[m-1]-req);
    }
    else ans = req;
    //bigger = bigger+1;
    cout << ans << " ";
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

