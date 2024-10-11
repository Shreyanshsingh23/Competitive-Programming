#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    
    
    while(t--){
         bool boo = false;
        int n,k;
        cin>>n>>k;
       
       vector<int> v (n);
       
       for(int i = 0; i < n; i++){
        int a;cin>>a;
        v[i] = a;
       }
       
      

        for(int i = 0; i< n;i++){
          if(v[i] == k){
            cout << "YES" <<  "\n";
           boo = true;
            break;
           
          }
          
        }
       
        if(!boo){
            cout << "NO" << "\n";
            }
    }
}