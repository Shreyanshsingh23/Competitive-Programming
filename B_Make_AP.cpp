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


void solve(){
int3(a,b,c);
// cout << n << ln

int aa = b -(c-b);
if(aa >= a && aa%a==0 && aa !=  0){
    cout << "YES" << ln;
    return;
}

int bb = a + (c-a)/2;
if(bb >= b && (c-a)%2 == 0 && bb%b ==0 && bb != 0){
    cout << "YES" << ln;
    return;
}

int cc = a + 2*(b-a);
if(cc >= c && cc%c==0 && cc != 0){
    cout << "YES" << ln;
    return;
}

cout << "NO" << ln;

}


signed main(){
  cin.tie(nullptr)->sync_with_stdio(false);
    
  int t = 1;
  cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

