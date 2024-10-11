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
  int2(n,x)
   
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Use a set to track which numbers are already present
    set<int> present;
    for (int i = 0; i < n; i++) {
        present.insert(a[i]);
    }

    int mex = 0;

    // Try to find the MEX
    while (present.count(mex)) {
        mex++;
    }

    // Now handle the gap filling using available increments
    for (int i = 0; i < n; i++) {
        if (a[i] < mex) {
            // Check if we can add `x` some number of times to make this element equal to `mex`
            int times = (mex - a[i]) / x;
            if (times * x + a[i] == mex) {
                present.insert(mex);
                mex++;
            }
        }
    }

    // Print the final MEX
    cout << mex << endl;

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

