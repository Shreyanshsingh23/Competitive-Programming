#include <bits/stdc++.h>
using namespace std;

int main(){
  int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
 
 if(y1 == y2){
  int diff = abs(x2-x1);
  cout << x1 << " " << y1 + diff << " " << x2 << " " << y2 + diff << endl;
  }
  else if(x1 == x2){
    int diff = abs(y2-y1);
     cout << x1 + diff << " " << y1 << " " << x2 + diff << " " << y2 << endl;
  }
  else if (abs(x2 - x1) == abs(y2 - y1)) {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    } 
 else{
  cout << -1 << endl;
 }
  
}

