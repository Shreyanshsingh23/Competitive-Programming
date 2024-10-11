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
vl h(n);
FOR(i,n) cin>> h[i];

 sort(h.begin(),h.end(),greater<lli>());
        long long int sum = h[0];


        for(auto e : h){
            cout << e << " ";
        }
        cout << ln;

 if(h.size()>h[0]){
            cout <<  -1;
        }
        for(int i = 1; i< h.size(); i++){
            if(h[i] >= h[i-1]){
                h[i] = h[i-1]-1;
            }
                if(h[i]<=0){
                    cout <<  -1;
                }
            
            sum+= h[i];
        }

        for(auto e : h){
            cout << e << " ";
        }

    
        cout << ln <<sum;



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

