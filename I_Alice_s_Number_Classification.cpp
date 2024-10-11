#include<bits/stdc++.h>
using namespace std;


int main(){
   // int t;cin>>t;
   // while(t--){
       int n; cin >> n ;
     
    if(n>0){
       if(n&1 != 1){  //even
        
        if(n%4== 0){
            cout << "Special Even" << endl;
        }
        else if(n<10){
             cout << "Small Even" << endl;
        }
        else{
            cout << "Large Even" << endl;
        }
    }
    else if(n&1 == 1){ //odd
         if(n%3==0){
            cout << "Special Odd" << endl;
        }
          else if(n<10){
             cout << "Small Odd" << endl;
        }
        else{
              cout << "Large Odd" << endl;
        }
    }
    }
    else if(n == 0){
        cout << "Zero" << endl;
    }
    else{
         if(n&1 != 1){  //even
        
        if((n%4)== 0){
            cout << "Special Negative Even" << endl;
        }
        else if(n> -10){
             cout << "Small Negative Even" << endl;
        }
        else{
            cout << "Large Negative Even" << endl;
        }
    }
    else if(n&1 == 1){ //odd
         if(n%3== 0){
            cout << "Special Negative Odd" << endl;
        }
          else if(n> -10){
             cout << "Small Negative Odd" << endl;
        }
        else{
              cout << "Large Negative Odd" << endl;
        }
    }
    }
    
       

        
    }


