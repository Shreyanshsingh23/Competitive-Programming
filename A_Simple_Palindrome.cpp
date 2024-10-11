#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
      int n; cin >> n;
      string ans = "";

    for(int i = 0; i< n; i++){
        if(i%5 == 0){
            ans += "a";
        }
        else if(i%5 == 1){
            ans += "e";
        }
        else if(i%5 == 2){
            ans += "i";
        }
        else if(i%5 == 3){
            ans += "o";
        }
        else {
            ans += "u";
        }

    }  

    cout << ans << endl;   

     
    }
}


