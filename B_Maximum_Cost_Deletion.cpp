#include<bits/stdc++.h>
using namespace std;

#define int  long long
#define ln endl;
//#define ln "\n"
#define vl vector<int>
#define all(v) (v.begin(), v.end())
#define int1(t) int t; cin >> t;
#define int2(n,k) int n,k; cin >> n >> k;
#define int3(n,k,r) int n,k,r; cin >> n >> k >>r;
#define pb      emplace_back
#define FOR(i,n) for(int i = 0; i< n; i++)

const bool testcase = 1;

void solve(){
int3(n,a,b)
string s ;cin >> s;
// if(n==1){
//     cout << (n*a) + b<< ln;
//     return;
// }
int countSegments = 0;
for(int i = 0; i < n; i++){
    for(int j = i+1; j< n; j++){
            if(s[j] != s[j-1] ){
                 countSegments++;
                 i += j;
            }
    }

    if(i == n-1 and countSegments == 0) countSegments++;
}

// cout << "countSegments: " << countSegments << ln;
if(b== 0){
    cout << n*(a+b) << ln;
    return;
}

if(a==0){
    cout << n*b << ln;
    return;
}

if(b < 0){ 
    cout << (countSegments*a) + b<< ln;
    
}else
{
    cout << n*(a+b) << ln;
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

