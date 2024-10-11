#include <bits/stdc++.h>
using namespace std;

#define v vector
#define p_b push_back

int main(){
    int t; cin >> t;
   
    while(t--){ 

    int n; cin >> n;

    v<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    v<int> a;
  
   // int j = 0;
    for(int i = 0; i< n; i++){
        if(i==0){
           a.p_b(b[i]);
        }
        else{
           if( b[i] >= b[i-1]){
                a.p_b (b[i]);
            }
            else {
                 a.p_b (b[i]);
                 a.p_b (b[i]);
            }
        }
    }

   
    cout << a.size() << endl;
    for(auto e : a){
        cout << e << " ";
    }
    cout << "\n";
}

}