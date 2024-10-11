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
var2(n,k);

lli median = (n+1)/2;
lli smallCount = (median-1)*k;
lli bigCount =  ( n-(smallCount/k))*k;


vl small (smallCount);
vl big (bigCount);



FOR(i,smallCount)cin >> small[i];
FOR(i,bigCount) cin >> big[i];


lli sum = 0;

for(int i = 0; i<  bigCount ; i+= (n-median+1)){
   sum += big[i];
}

cout << sum << ln;


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

