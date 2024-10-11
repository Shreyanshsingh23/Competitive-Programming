#include<bits/stdc++.h>
using namespace std;

bool isSubstring(string s1, string s2) 
{ 
    int m = s1.length(); 
    int n = s2.length(); 
  
  if(s1.find(s2) != -1) {
      return true;
}

return false;
}




int main(){
    int t;cin>>t;
    while(t--){
        int n,m; cin >> n >> m;
        string a,b; cin >> a >> b;
        int ans = -1;
        int count = 0;
        if(isSubstring(a,b)){
            cout << 0 << endl;
        }
        else{

            while(a.length()< b.length()+1000){
                count ++;
                a = a+a;
              
                if(isSubstring(a,b)){
                    ans = count;
                    break;
                }
            }
        }

     

        cout << ans << endl;

        
    }
}

