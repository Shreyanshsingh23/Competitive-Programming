#include<bits/stdc++.h>
using namespace std;

#define int  long long
#define double long double
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

void solve(int t){
    int1(n)
    vl a(n),b(n);
    FOR(i,n){
        cin >> a[i] >> b[i];
    }
    int minn = INT_MAX;
    int index = 0;
    for(int i = 1; i< n; i++){
        if(a[i-1] >= b[i]){
             cout << "Case #" << t << ": " << -1 << ln;
             return;
        }
    }
  for(int i = n-1; i>= 0; i--){
    if(b[i] < minn){
        minn = b[i];
        index = i;
    }
   }
   
   


    double ans =  (double)(index+1) / (double) minn ;

    cout << "Case #" << t << ": " << fixed << setprecision(10) << ans << ln;
}


signed main(){
  cin.tie(nullptr)->sync_with_stdio(false);
   freopen("input1.txt","r",stdin);freopen("output1.txt","w",stdout);
  int t = 1;
  testcase and cin >> t;
  for(int i = 0; i<  t; i++){
    solve(i+1);
  }
 return 0;
}

