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

void solve(int t){
    int1(n)
    vl a(n),b(n);
    FOR(i,n){
        cin >> a[i] >> b[i];
    }
    int minn = INT_MIN;
    int index = 0;
    vector<double> x(n);
    
    int ubound = INT_MAX;
    int uindex = 0;
    int lbound = INT_MIN;
    int lindex = 0;

    for(int i= 0; i< n; i++){
        if(((double)b[i]/i+1) < ubound){
            ubound = ((double)a[i]/i+1);
            uindex= i+1;
        } 

        if(((double)b[i]/i+1) > lbound){
            lbound = ((double)b[i]/i+1);
        } 
    }
    cout << fixed << setprecision(10) << (double)uindex/b[uindex-1] << ln ;

    
}


signed main(){
  cin.tie(nullptr)->sync_with_stdio(false);
     freopen("input1.txt","r",stdin);freopen("output1.txt","w",stdout);
  int t = 1;
  testcase and cin >> t;
  for(int i = 0; i<  t; i++){
    cout << "Case #" << i+1 << ": " ;
    solve(i+1);
  }
 return 0;
}

