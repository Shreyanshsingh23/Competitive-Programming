#include <bits/stdc++.h>
using namespace std;

int main(){

   
   
    int n; cin >> n;
    
   
   for(int i = 1; i <= n; i++){
    for(int j = 0; j < i; j++){
        cout << "*";
    }
    cout << endl;
   }

   cout << endl;
    
   for(int i = 1; i <= n; i++){

    for(int j = 0; j < n -i; j++){
        cout << " ";
    }
    for(int j = 0; j < i; j++){
        cout << "*";
    }
    cout << endl;
   }
   cout << endl;

      
   for(int i = 1; i <= n; i++){

    for(int j = 0; j < n -i; j++){
        cout << " ";
    }
    for(int j = 0; j < (2*i)-1; j++){
        cout << "*";
    }
   
    cout << endl;
   }
    cout << endl;


   for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
       if(i < n && (j==1 || j == i)){
        cout << "*";
       }
       else if(i == n){
        cout << "*";
       }
       else{
        cout << " ";
       }
    }
    cout << endl;
   }

    cout << endl;

     for(int i = 1; i <= n; i++){

    for(int j = 0; j < n -i ; j++){
        cout << " ";
    }

    for(int j = 1; j <= i; j++){
        if(i < n && (j == 1 || j == i)){
            cout << "*";
        }
        else if(i == n){
             cout << "*";
        }
        else{
             cout << " ";
        }
    }

    cout << endl;
   }
    
     cout << endl;

      
   for(int i = 1; i <= n; i++){

    for(int j = 0; j < n -i; j++){
        cout << " ";
    }
    for(int j = 1; j <= (2*i)-1; j++){
       if(i < n && (j == 1 || j == (2*i)-1)){
        cout << "*";
       }
        else if(i == n){
             cout << "*";
        }
        else{
             cout << " ";
        }

    }
    
    cout << endl;
   }
    return 0;
} 