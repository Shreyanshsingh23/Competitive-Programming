#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        if(n < 7){
            cout << "NO"  << endl;
            continue;
        }
        int sum = 0;
       if((n%3) != 0){
        cout << "YES\n" << 1 << " " << 2 << " " << n-3 << endl;
       }
       else{
        if(n == 9) {
            cout <<  "NO"  << endl;
        }
        else{ 
        cout << "YES\n" << 1 << " " << 4 << " " << n-5 << endl;
        }
       }
    }
}