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

void solve() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;  

 
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }

    while(pq.size() > 1) {
        int a = pq.top(); pq.pop();  
        int b = pq.top(); pq.pop();  
        
        int new_val = (a + b) / 2;  
        pq.push(new_val);           
    }

    cout << pq.top() << endl;
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