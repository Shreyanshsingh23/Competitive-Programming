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

typedef pair<int, int> pi; 

const bool testcase = 0;

void actualSort(vl& v,int j){
     int minn = INT_MAX;
     int n = v.size();
     int index = -1;
     for(int i = j; i< n; i++){
        if(v[i] < minn){
            minn=v[i];
            index = i;
        }
     }
        swap(v[index],v[j]);
}
void sortMin(vl& v){
    actualSort(v,0);
    actualSort(v,1);
    actualSort(v,2);


}
void solve(){
    vl v {1,3,2,4,5,0,6};
    sortMin(v);
    for(auto e:v){
        cout << e << " ";
    }

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

