#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<int> arr(n);
       
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        //array is created

        vector<int> diff(n+1,0);

        for(int i = 0; i < m;i++){
            
            char s; 
            int l,r;cin>>s >> l >> r;
            
            if(l <= arr[i] && r >= arr[i]){
                if(s == '+'){
                    diff[i]++;
                }
                else{
                    diff[i]--;
                }
            }
            int current = 0;

            int maxVal = INT_MIN;
 
            for(int i = 0; i < n; i++){
                current += diff[i];
                arr[i] += current;
                maxVal = max(arr[i],maxVal);
            }
        
            cout << maxVal << " ";
           
          
        }     
         
        cout << "\n";

       
    } // main loop
}