#include<bits/stdc++.h>
using namespace std;


int main(){
   
   
        int t; cin >> t ;
        while(t--){
            int n,x,y; cin >> n >> x >> y;
            // int ans = (n + min(x,y) -1)/min(x,y);
            int ans = ceil((n*1.00)/(min(x,y))) ;
            cout << ans << endl;
        }

        return 0;
    }


/*
void solve(){
    ll n,x,y; cin>>n>>x>>y;
    ll ans=ceil((n*1.00)/(min(x,y)));
    cout<<ans<<endl;
}

ceil((n*1.00)/(min(x,y)))   instead of (n+min(x,y)-1)/min(x,y)

ceil((n*1.00)/k )   instead of (n+k-1)/k
*/