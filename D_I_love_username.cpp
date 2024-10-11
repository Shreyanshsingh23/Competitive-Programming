#include <bits/stdc++.h>
using namespace std;

int main(){

   
   
    long long n; cin >> n ; 
   
   vector<int> v(n);
   for(int i = 0; i< n; i++ ){
    cin >> v[i] ;
   }

    int count = 0;

     int minVal = INT_MAX;
     int maxVal = INT_MIN;
   for(int i = 1; i< n; i++){
     
       if(v[i] == v[i-1]){
         continue;
       }
           
        
    if(v[i] == minVal || v[i] == maxVal){
            continue;
        }
     minVal = v[i];
     maxVal = v[i];

    for(int j = 0; j < i; j++){
       
       
        maxVal = max(maxVal,v[j]);
        minVal = min(minVal,v[j]);
    }
    if(v[i] == maxVal || v[i] == minVal){
        count ++;
    }
   }

   cout << count ;
    return 0;
} 