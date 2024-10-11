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

const bool testcase = 0;

void print(int i,int j, int r,int c, vector<vector<int>>& v, vector<vector<bool>>& b, int originalr, int originalc){
    //base case
    if(i > originalr or j> originalc or ! b[i][j]){
        return;
    }
    if(i < r and j == c-1 ){
        // cout << "JI" <<ln;
        cout << v[i][j] << " ";
        b[i][j]= false;
        // cout << "j: " << j << ln;
        // cout << "i: " << i<<ln;
        // cout << "c: " << c << ln;
        print(i+1,j,r,c-1,v,b,originalr,originalc);
    }
    else if(i < r and j < c and (  i == 0 or b[i-1][j]==false)){
        cout << v[i][j] << " ";
        // cout << "C:" <<j << ln;
        b[i][j]= false;
        print(i,j+1,r,c,v,b,originalr,originalc);
    }
     else if(i <= r and j == c){
        cout << v[i][j] << " ";
        b[i][j]= false;
        print(i+1,j,r-1,c,v,b,originalr,originalc);
    }
    else if(i == r-1 and j==c){
        cout << "ji" << ln;
        cout << v[i][j] << " ";
        b[i][j]= false;
        print(i,j-1,r-1,c,v,b,originalr,originalc);
    }
    
   
    else if(i==r and j > 0){
        // cout << "row: " << r << ln;
        
        cout << v[i][j] << " ";
        b[i][j]= false;
        print(i,j-1,r-1,c,v,b,originalr,originalc);
    }
    // else if(i > 0 and j ==1){
    //     cout << v[i][j] << " ";
    //     b[i][j] = false;
    //     print()
    // }
    else if(i > 0 and j ==0){
        cout << "Ok" << ln;
        cout << v[i][j] << " ";
        b[i][j]= false;
        print(i-1,j,r,c,v,b,originalr,originalc);
    }
    
}

void byLoop(int m, int n, vector<vector<int>>& A){
    int i = 0,j=0;
    int a = 0;
    int numofele = 0;
    while(true){
            i=a;
            for(j=a;j<=n-(a+1);j++){
                cout << A[i][j] << " ";
                numofele++;
            }
            if(numofele>=(m*n)){
                break;
            }
            j=n-(a+1);
            for(i=a+1;i<=m-(a+1);i++){
                cout << A[i][j]  << " ";
                numofele++;
            }
            if(numofele>=(m*n)){
                break;
            }
            i=m-(a+1);
            for(j=(n-(a+1))-1;j>=a;j--){
               cout << A[i][j]  << " ";
                numofele++;
            }
            if(numofele>=(m*n)){
                break;
            }
            j=a;
            for(i=(m-(a+1))-1;i>=a+1;i--){
                cout << A[i][j]  << " ";
                numofele++;
            }
            if(numofele>=(m*n)){
                break;
            }
            a++;
        }
}
void solve()
{
    int2(n,m);


    vector<vector<int>> v(n,vector<int>(m));
    FOR(i,n){
        FOR(j,m){
            cin >> v[i][j];
        }
    }

    // vector<vector<bool>> b(n,vector<bool>(m,true));
    // print(0,0,n,m,v,b,n,m);
    byLoop(n,m,v);

}


signed main(){
  cin.tie(nullptr)->sync_with_stdio(false);
    
  int t = 1;
//   testcase and cin >> t;
  while(t--){
       solve();
    }
 return 0;
}

