#include<bits/stdc++.h>
using namespace std;


int main(){
   
   
        int n,m; cin >> n >> m;

       for(int k = n+1; k <= m; k++){
        int i = 2;
        bool flag = false;
        while(i*i <= k){
            if(k%i == 0){
                flag = true;
                break;
            }
            i++;
        }
        if(!flag){
            if(k==m){
                cout << "YES";
                return 0;
            }
            else{
                 cout << "NO";
                 return 0;
            }
        }
       }
       cout  << "NO";
        return 0;
    }
