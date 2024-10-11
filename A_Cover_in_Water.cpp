#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin >>s;
      
      // count that if there are 3dots continously....if yes, then answer will be 2 no matter what ..otherwise the answer will be equal to number of dots in the string 

        int count = 0;
        bool _3dots = false;
      for(int i = 0; i< s.length(); i++){
        
        if(s[i]=='.'){
            count ++;
            if(count >=3){
                _3dots = true;
            }
        }
        else{
            count = 0;

        }
        
      }

      if(_3dots){
        cout << 2 << endl;
        continue;
      }
      else{
     int dots = 0;

    for(int i = 0; i< s.length();i++){
        if(s[i]=='.'){
            dots++;
        }
    }
      

     

      cout << dots << endl;

      }
 
 
    }
}


