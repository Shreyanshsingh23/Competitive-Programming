#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    
   
    while(t--){
       int n;cin >> n;

        int sum = 0;

    for(int i = 0;i < n;i++){
      int temp;cin >> temp;
      sum += temp;
     }

     if((sum & 1 )!= 1){
        cout << "YES" << endl;
     }
     else{
         cout << "NO" << endl;
     }

       
    
       
     }// main loop
}