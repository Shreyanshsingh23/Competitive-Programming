#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
      long long n; cin >> n;
     
     long long matches = (n*(n-1))/2;
    // cout << "matches" << matches << endl;
     
     matches -= (3*n)-6;

   // cout << "rem matches" << matches << endl;

    cout <<(matches + n - 3 -1)/(n-3) << endl;   

     
    }
}


