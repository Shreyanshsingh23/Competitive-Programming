#include<bits/stdc++.h>
using namespace std;

#define int  long long
#define ln endl;
//#define ln "\n"
#define vl vector<int>
#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n,k) int n,k; cin >> n >> k;
#define int3(n,k,r) int n,k,r; cin >> n >> k >> r;
#define pb      emplace_back
#define FOR(i,n) for(int i = 0; i< n; i++)

const bool testcase = 1;

char getBestChar(string &s,vector<int>& cost,int prev, int next){
    int n= s.size();
    if(prev == -1 and next == n){
        return 'a';
    }

    if(prev == -1){
        prev = next;
    }
    if(next == n){
        next = prev;
    }
    int ans = 0;
    for(int i = 0; i< 26; i++){
        if(cost[prev] <= cost[i] >= cost[next]){
            ans = ;
        }
    }
    return 
}
void solve(){
string s; cin >>s;
vl v(26);
char ch = 'a';
for(auto &x : v){
  cin >> x;
}
int i = 0;
int n= s.size();

while(i < n){
    while(s[i] != '?'){
        i++;
    }
    int j = i;
    while(j < n and j == '?'){
        j++;
    }

    int prev = i-1;
    int next = j;

    char ch = getBestChar(s,cost,prec,next);

    for(int k = i;k < j; k++){
        s[k] = ch;
    }
    i= j;
}

cout << s << ln;
}


signed main(){
  cin.tie(nullptr)->sync_with_stdio(false);
    
  int t = 1;
  testcase and cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

