#include <bits/stdc++.h>
using namespace std;

int main(){

   
   
    long long n,k; cin >> n >> k; 
    
    if((n&1) != 1){ //even
        if(k <= n/2){
            cout << (2*k)-1;
        }
        else{
            k -= n/2;
            cout << 2*k;
        }
    }
    else{
         if(k <= (n/2)+1){
            cout << (2*k)-1;
        }
        else{
            k -=(n/2)+1;
            cout << 2*k;
        }
    }
    
    return 0;
} 