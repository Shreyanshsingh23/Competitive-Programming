#include<bits/stdc++.h>
using namespace std;


int main(){
   // int t;cin>>t;
   // while(t--){
      int h; cin >> h;
      char ch ;cin >> ch;
      int m;cin >> m;

      int add; cin >> add;

      m += add;
      while(m >= 60){
        m -= 60;
        h += 1;
      }
      while(h >= 24){
        h -= 24;
      }

    if(h < 10 && m < 10){
        cout << 0 << h << ":" << 0 << m << endl;
    }
    else if(h < 10 && m >= 10){
         cout << 0 << h << ":" << m << endl;
    }
      else if(h >= 10 && m < 10){
       cout <<  h << ":" << 0 << m << endl;
    }
       else{
        cout  << h << ":" << m << endl;
       }
        
    }


