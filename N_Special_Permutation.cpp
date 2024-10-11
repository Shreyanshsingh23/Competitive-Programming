#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

       int i = n;
       int j = 1;
       while(j <= n){
        if(i != j){
            cout << i << " " ;
        }
        else{
            cout << i-1 << " " << i << " ";
            j++;
            i--;
        }
        i--;
        j++;
       }
       cout << endl;
    }
}