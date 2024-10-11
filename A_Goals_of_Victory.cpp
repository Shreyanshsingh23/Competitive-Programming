#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    
   
    while(t--){
       int n;cin >> n;
    int total = 0;
      for(int i = 1; i < n; i++){
        int a ;cin>>a;
        total += a;
      } 

      cout << 0-total << endl;
       
    
       
     }// main loop
}