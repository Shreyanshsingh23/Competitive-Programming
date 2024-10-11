#include <bits/stdc++.h>
using namespace std;

int main(){

   
   
    int n; cin >> n;
    
   int count0 =0,count5 =0;

   

   for(int i = 0; i < n; i++){
        int x;cin >> x;
        if(x==5){
            count5 ++;
        }
        else{
            count0 ++;
        }
   }

   if(count0 == 0){
    cout << -1 << endl;
    return 0;
   }
   if(count5 < 9){
     cout << 0 << endl;
     return 0;
   }

    count5 -= count5%9;


 

while(count5 != 0){
   cout << 5;
   count5--;
}

while(count0 != 0){
   cout << 0;
    count0--;
}

    
   
  
   cout << endl;
    
    return 0;
} 