    #include<bits/stdc++.h>
    using namespace std;

    #define lli long long int
    #define ln endl
    #define ln "\n"
    #define vl vector<lli>
    #define all(v) v.begin(), v.end()
    #define var1(t) lli t; cin >> t;
    #define var2(n,k) lli n,k; cin >> n >> k;
    #define var3(n,k,r) lli n,k,r; cin >> n >> k >> r;
    #define pb      emplace_back


    int gd(int a, int b){
        if(b > a){
            swap(b,a);
        }
        // base condition
        if(b == 0){
            return a;
        }

        if((a%b)== 0){
            return b;
        }
        else{
           return gd(b,a%b);
        }
        }
    

    void solve(){
        int n; cin >> n;
       
        int ans = 0;
        for(int i = 1;i <= n; i++){
           int x; cin >> x;
           ans = gd(ans,abs(x-i));
          
        }

        cout << ans << ln;
    }

    int main(){
     
    int t; cin >> t;
        while(t--){
            solve();
        }
    return 0;
    }

