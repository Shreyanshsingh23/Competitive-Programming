#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ln endl
#define ln "\n"
#define vl vector<lli>
#define all(v) v.begin(), v.end()
#define var1(t) lli t; cin >> t;
#define var2(n,k) lli n,k; cin >> n >> k;
#define var3(n,k,r) lli n,k,r; cin >> n >> k >> r;
#define pb      emplace_back
#define FOR(i,n) for(lli i = 0; i< n; i++)


void solve(){
// var1(n);
string s; cin >> s;

unordered_map<char,int> mp;
int count = 0;
for(char e : s){
    mp[e] = ++count;
}

// for(auto e : mp){
//     cout << e.first << " " << e.second << ln;
// }
lli sum = 0;

for(int i = 0;i < 26; i++){
    char current_char = 'A' + i;
        char next_char = 'A' + (i + 1);
        if (mp.find(current_char) != mp.end() && mp.find(next_char) != mp.end()) {
            sum += abs(mp[next_char] - mp[current_char]);
        }
}

cout << sum << ln;


}


int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
  
  int t = 1;
  //cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

