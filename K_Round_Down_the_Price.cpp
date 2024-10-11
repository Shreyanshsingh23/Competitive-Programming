#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;cin >> t;
    while(t--){ 
    int n; cin >> n;
    
    int x = 1;

    while(x * 10<= n){
        x *= 10;
    }

    cout << n -x << endl;


    }
    return 0;
} 