#include<bits/stdc++.h>
using namespace std;


int main(){
   // int t;cin>>t;
   // while(t--){
       int n,k; cin >> n >> k;
       int days = 0;
           if(n==2){
              days =28 ;
              
           }
           else if(n < 8){
               if((n&1)==1){
                   days = 31;
               }
               else{
                   days = 30;
               }
           }
           else{
                if((n&1)==1){
                   days = 30;
               }
               else{
                   days = 31;
               }
           }     
           
    
      int ans = 1;
      days -= 8-k;

      ans += (days+7-1)/7;
       
       cout  << ans << endl;

        
    }


