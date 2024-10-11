#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int small ,big = 0;

    for(int i = 0;i < s.length() ;i++){
        if(isupper(s[i])){
            big++;
        }
        else{
            small++;
        }
    }
    

    if(big>small){
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }

    cout << s << endl;
    return 0;
}