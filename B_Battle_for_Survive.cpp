#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define forin for(lli (i); (i) < (n); (i)++)
#define ln endl
#define vl vector<lli>
#define all(v) v.begin(), v.end()


int main(){
   
   lli t; cin >> t;
    while(t--){
        lli n; cin >> n;
        vl v(n);
        lli sum = 0;
        
        for(lli i = 0; i< n; i++){
          cin >> v[i];
            sum += v[i];
        }
        // cout << "sum : " << sum << ln;
        sum -= (v[n-1] + v[n-2]);
       // cout << "sum : " << sum << ln;

        lli ans = v[n-1] - (v[n-2] - sum);

        cout << ans << ln;

    }
   
        return 0;
    }



/*

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(), v.end()
 
 
 void solve(){
    ll n; cin>>n;
    vector<ll> v(n);
    ll s=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];    
    }
    s-=(v[n-1]+v[n-2]);
    cout<<v[n-1]-(v[n-2]-s)<<endl;
}
    
 
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}


*/