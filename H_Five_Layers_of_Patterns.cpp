#include <bits/stdc++.h>
using namespace std;

int main(){

   
   
    int n,m; cin >> n >> m;
    
   
   for(int i = 1; i <= n; i++){
    for(int j = 0; j < m; j++){
        cout << "*";
    }
    cout << endl;
   }

   cout << endl;
    char ch = 'A';
   for(int i = 1; i <= n; i++){

    for(int j = 0; j < m; j++){
        cout << ch;
    }
    ch++;
    cout << endl;
   }
   cout << endl;

      ch = 'A';
    for(int i = 1; i <= n; i++){

    for(int j = 0; j < m; j++){
        cout << ch;
        ch++;
    }
    ch = 'A';
    cout << endl;
   }
    cout << endl;

    int num = 1;
   for(int i = 1; i <= n; i++){

    for(int j = 0; j < m; j++){
        cout << num;
    }
    num++;
    cout << endl;
   }

    cout << endl;

    for(int i = 1; i <= n; i++){

        num = 1;
    for(int j = 0; j < m; j++){
        cout << num ++;
    }
    num = 1;
    cout << endl;
   }
    
    return 0;
} 