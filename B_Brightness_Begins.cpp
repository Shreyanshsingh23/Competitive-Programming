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


int countBulbs(int n) {
    vector<bool> bulbs(n + 1, true); 
    
  
    for(int i =1; i<=n; i++) {
    for (int j = i; j <= n; j += i) {
      bulbs[j] = !bulbs[j];
     }
    }
    
    
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (bulbs[i]) count++;
    }
    
    return count;
}



void solve(){
var1(k);

if(k==1){
    cout << 2 << ln;
    return;
 }
  long long left = 1, right = k*k; // We know n can be as large as 1e18
    long long answer = -1;
    
    // Binary search for the smallest n such that the number of perfect squares <= n is exactly k
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long onBulbs = countBulbs(mid); // Number of bulbs remaining on up to mid
        
        if (onBulbs >= k) {
            answer = mid; // Potential answer, but we need the smallest n
            right = mid - 1;
        } else  {
            left = mid + 1;
        } 
    }
       
cout << answer << ln;

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

