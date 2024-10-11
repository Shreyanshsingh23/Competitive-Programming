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
    int1(n)
    if(n==2){
        cout << -1 << ln;
        return;
    }
    if(n==1){
        cout << 1 << ln;
        return;
    }

    vl v(n*n);
    int i = 0;

    // int count = 1;
    // while(count+2 <= n*n){
    //     v[i++] = count;
    //     count += 2;
    // }
    // v[i++] = count; 
    // count = 2;
    // while(count+2 <= n*n){
    //     v[i++] = count;
    //     count += 2;
    // }

    // v[i++] = count; 
    //This is accepted code

    int j = ((n*n)+1)/2;
    int k = n*n;

    while(i <  n*n){
        if(!(i&1)){
            v[i++] = j--;
        }else
        {
           v[i++] = k--;
        }
            }

    for(int i = 0; i< n*n; i++){
        for(int j = 0; j< n;j++){
            cout << v[i] << " ";
            i++;
        }
        i--;
        cout << ln;
    }
}
// Now this is also accepted code
// This is called wiggle arrangement technique


signed main(){
  cin.tie(nullptr)->sync_with_stdio(false);
    
  int t = 1;
  testcase and cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

