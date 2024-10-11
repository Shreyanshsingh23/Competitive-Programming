#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;

    vector<int> v(n*n);

    for(int i = 1; i<= n*n;i++){
        v[i-1] = i;
    }

    // for(int e: v){
    //     cout << e << " ";
    // }

int index = 0;
   for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if((j&1) != 1){
            cout << v[index] << " " ;
        }
        else{
            cout << v[v.size()-1-index] << " ";
            index ++;
        }
    }
    cout << endl;
   }

    return 0;
} 