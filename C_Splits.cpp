#include<bits/stdc++.h>
using namespace std;


int main(){
   // int t;cin>>t;
   // while(t--){
       int n; cin >> n;

    int count = 0;
    set<int> ss;

    bool flag = false;
    for(int i = 2; i<= n/2; i++){
        count = 0;
        for(int j = 1;j*i <=n; j++){
            count ++;
        }
        ss.insert(count);
    }    
           set<int> toInsert;
  ss.insert(1);
vector<int> v;

for(int e : ss){
    v.push_back(e);
}

for(int i = 0; i< v.size()-1; i++){
    if(v[i+1]-v[i] == 2){
        v.insert(v.begin()+1+i, v[i]+1);
    }
}
//  for(auto it = ss.begin(); it != ss.end(); it++){
//    auto it2 = next(it);
//   if(*it2 - *it == 2){
//     toInsert.insert(*it + 1);
//   }

//   for(int e : toInsert){
//     ss.insert(e);
//   }
//  }
    cout << v.size() +1 << endl;
    

        
    

}


