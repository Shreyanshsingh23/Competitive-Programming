#include<bits/stdc++.h>
using namespace std;

#define v vector

int main(){
   int t;cin >> t;

    while(t--){

    vector <vector<char>> s(10);
        for(int i = 0; i< 10; i++){
         for(int j = 0; j < 10; j++){
          char ch ;cin >> ch;
          s[i].push_back(ch);
         }
         s.push_back(s[i]);
       } 
   vector <vector<int>> v(10);

       for(int i = 0; i< 10; i++){
          for(int j = 0;j< 10; j++){
               if(i > 4 && j <=4){
                    v[i].push_back(min(10-i,j+1));
               }
               else if(j > 4 && i <=4){
                    v[i].push_back(min(i+1,10-j));
               }
               else if(i > 4 && j > 4){
                    v[i].push_back( min(10-i,10-j));
               }
               else{
                    v[i].push_back( min(i+1,j+1));
               }
          }
          v.push_back(v[i]);
       } 
     int ans = 0;
        for(int i = 0; i< 10; i++){
          for(int j = 0;j< 10; j++){
            if(s[i][j] == 'X'){
               ans += v[i][j];
            }
              }
            
          }


          cout << ans << endl;
       } 

       


            
        
    }
