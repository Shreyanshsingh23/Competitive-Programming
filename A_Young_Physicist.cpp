#include<bits/stdc++.h>
using namespace std;


int main(){
   
   
        int n; cin >> n ;

        vector<vector<int>> v;
        bool flag = true;

        for(int i = 0; i< n; i++){
            vector<int> temp(3);
            for(int j = 0; j< 3; j++){
                
                cin >> temp[j];
            }
            v.push_back(temp);
        }

    for(int i = 0;i < 3; i++){
        int sum = 0;
      for(int j = 0; j < n; j++){
        sum += v[j][i]; 
      }
      if(sum != 0){
        cout << "NO" << endl;
        flag = false;
        break;
      }
    }
    
    if(flag){
          cout << "YES" << endl;
    }
       
        return 0;
    }
