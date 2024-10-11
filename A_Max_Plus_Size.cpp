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

vector<lli> secondLargest(vector<lli> v) {
    sort(v.begin(), v.end(), greater<int>());  // Sort in descending order
    int largest = v[0];
     vl add(2);
    for (int i = 1; i < v.size(); i++) {
        if (v[i] < largest) {  // Find the second distinct element
            add[0]= i;
            add[1] = v[i];
        }
    }
    return add;  // In case all elements are the same
}

void solve(){
var1(n);
vl v(n);
FOR(i,n)  cin >> v[i];

lli v1=0,v2=0;

FOR(i,n){
   if(i&1) v1 = max(v1,v[i]);
   else v2 = max(v2,v[i]);
}

// for odd indices : simply:
v1 += n/2;

//for even indices : floor value 

v2 += (n+1)/2;

cout << max(v1,v2) << ln;


/*

Instead of counting number of colored indices like what I have done behind ... we can simply do that I am doing above this line

*/


// lli ans = 1;
//  auto mxx = max_element(all(v));

//  while(mxx-2 >= v.begin()){
//     ans ++;
//     mxx -= 2;
//  }
//  mxx = max_element(all(v));
//  while(mxx + 2 < v.end()){
//     ans ++;
//     mxx += 2;
//  }
//cout << v.end()-max_element(all(v)) << ln;

// cout << ans + *max_element(all(v))  << ln;
//  lli max_val = *max_element(all(v)); // Find the maximum element
//   cout << "maxv" << max_val << ln;
  
//     lli index = 0;
//      for (int i = 0; i < n; i++){
//         if(v[i] == max_val){
//             index = i;
//             break;
//         }
//      }
//      cout << "ind" << index<< ln;
//      lli ans = 1;
//       lli nindex = index;
//      while(nindex +2 < n){
//         ans ++;
//      }
//      nindex = index;
//      while(nindex -2 >= 0){
//                 ans ++;
//      }
    
    
//      cout << ans+max_val << endl;
     
  
   
}


int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
  
  int t = 1;
  cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

