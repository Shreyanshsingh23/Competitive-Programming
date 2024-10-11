#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ln endl
//#define ln "\n"
#define vl vector<lli>
#define all(v) v.begin(), v.end()
#define var1(t) lli t; cin >> t;
#define var2(n,k) lli n,k; cin >> n >> k;
#define var3(n,k,r) lli n,k,r; cin >> n >> k >> r;
#define pb      emplace_back
#define FOR(i,n) for(lli i = 0; i< n; i++)

bool isVowel(char& ch){
    return(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
void solve(){
//var1(n);
string s; int k;
cin >> s >> k;
int n= s.length();
int ans =0;
for(int i = 0;i<n; i++){
    unordered_set<char> st;
    int kcount = 0;
    for(int j = i; j< n; j++){
        if(isVowel(s[j])){
            st.insert(s[j]);
        }
        else{
            kcount ++;
        }

      
        
        if(st.size()== 5 && kcount == k){
        ans ++;
    }
  

    if(kcount > k) break;
    }

    

    

}
cout << ans << ln;

}


int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
  
  int t = 1;
  // cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

