#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s ; cin  >> s ;
    int n = s.length();

    for(int i = n-1 ; i > 0 ; i--){
      if(s.substr(0,i) == s.substr(n-i)){
       if(i < n/2)
       { cout << "YES" << endl << s.substr(0,i);
        return 0;}
      }
     
    }
     cout << "NO" << endl;

   
    return 0;
} 