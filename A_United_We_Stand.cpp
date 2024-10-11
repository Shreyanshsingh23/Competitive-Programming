#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    
   
    while(t--){
       int n;cin >> n;
      vector<int> a(n);
      for(int i = 0; i < n; i++){
        int temp;cin >> temp;
        a.push_back(temp);
      } 
      sort(a.begin(),a.end());
    bool possible = false;
      for(int i = 0;i < a.size()-1;i++){
       if(a[i] != a[i+1]){
        possible = true;
        break;
       }
     }

     if(!possible){
        cout << -1 << endl;
        continue;
     }
 
      vector<int> b;
      vector<int> c;
    
     b.push_back(a[0]);
     a.erase(a.begin());
     for(int i = 0;i < a.size();i++){
        c.push_back(a[i]);
     }

      cout << 1 <<" " << c.size() << endl;

      for(int i = 0;i < b.size();i++){
       cout << b[i] << " ";
     }

    cout << "\n";
     for(int i = 0;i < c.size();i++){
       cout << c[i] << " ";
     }

       
    
       
     }// main loop
}