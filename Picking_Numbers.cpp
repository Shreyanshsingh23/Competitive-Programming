#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    vector<int> a;
    int k = 0;
    while(t--){
       int b;cin >> b;
       a[k++] = b;
       
    }
       sort(a.begin(),a.end());
        int count = 1;
        int maxVal = INT_MIN;


        for(int i = 0; i < a.size()-1;i++){
            
       if(a[i+1] - a[i] <= 1){
            count ++;
       }
       else{
        maxVal = max(maxVal,count);
        count = 1;
        i--;
       }
          
        }     
         
        cout << maxVal<<endl;

       
     // main loop
}