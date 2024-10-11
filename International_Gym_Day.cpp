#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t;cin >>t;
 
 while(t--){
     int d,x,y;cin >> d >> x >> y;
     
     if( y >= x){
         cout << 0 << endl;
         continue;
     }
     bool flag = false;
     
      int fixedx = x;
      int fixedd = d;
      int trial = 0;
      int i = 0;
     while(i < 50){
         i++;
         y --;
        trial ++;
         
         x = ((100-d)*fixedx)/100;
        
         d+= fixedd;
         
        if(y >= x){
            cout << trial << endl;
            flag = true;
            break;
        }
     }
     
     if(!flag){
         cout << -1 << endl;
     }
 }
}


