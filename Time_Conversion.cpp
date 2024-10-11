#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;
     string ans = "";
    int hour = stoi(s.substr(0,2));
    string h = "";
    
    
    if(s[8] == 'P'){
       if(hour != 12){
           hour += 12;
           h = to_string(hour);
       }
}
    else{
        if(hour == 12){
        hour = 0; 
         h = to_string(hour);
         h = h+'0';
    }
}

 string a  = ans + h + s.substr(2,6);
 cout << a;
}
