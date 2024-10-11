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

// const v = {-2,0,2};

void solve(){
int1(n)
// cout << n << ln
for(int i = 1; i<= n; i++){ 
    for(int j = 0; j< (2*n)-i; j++){
        cout << " ";
    }
    for(int j = 0; j< (2*i)-1; j++){
        cout << "*";
    }
cout << ln;
}
//pyramid done

int count = 1;

for(int i = 0; i< n; i++){
    for(int j = 1; j <= i; j++){
        cout << " ";
    }
    for(int j = 0; j< (4*n) -count ; j++){
        cout << "*";
        
    }
    count += 2;
    cout << ln;
}

count -= 2;

for(int i = n; i> 0; i--){
    for(int j = 0; j < i-1; j++){
        cout << " ";
    }
    for(int j = 0; j< (4*n) -count ; j++){
        cout << "*";
        
    }
    count -= 2;
    cout << ln;
}

for(int i = n; i>= 1; i--){ 
    for(int j = 0; j< (2*n)-i; j++){
        cout << " ";
    }
    for(int j = 0; j< (2*i)-1; j++){
        cout << "*";
    }
cout << ln;

}
}


signed main(){
  cin.tie(nullptr)->sync_with_stdio(false);
    
  int t = 1;
  //cin >> t;
  while(t--){
    //    solve();
    }
    char ch = 'b' ;   
    cout << ch -'a';
 return 0;
}

