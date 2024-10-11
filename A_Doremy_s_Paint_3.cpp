#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    
    
    while(t--){
        
        int n;
        cin>>n;
        bool flag = false;
       
       vector<int> v (n);
       
       for(int i = 0; i < n; i++){
        cin>>v[i];
         
       }
       
      set<int> unique (v.begin(),v.end());

      if(unique.size() > 2){
        cout << "No" << "\n";
      }
      else if(unique.size() < 2){
        cout << "Yes" << "\n";
      }
      else if(unique.size() == 2){
        auto it = unique.begin();
        int a = *(it);
        advance(it,1);
        int b = *(it);

        int counta = 0;
        int countb = 0;

        for(int i = 0; i< n;i++){
            if(v[i]==a){
                counta ++;
            }
            else{
                countb++;
            }
        }
        if(abs(counta-countb)<2){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
      }
      
   
    }
}