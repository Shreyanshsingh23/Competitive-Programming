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

bool isRight(int &x1,int &y1,int &x2,int &y2,int &x3,int &y3){
    int d1 = pow(x1-x2,2) + pow(y1-y2,2);
    int d2 = pow(x2-x3,2) + pow(y2-y3,2);
    int d3 = pow(x1-x3,2) + pow(y1-y3,2);

    int mx = max({d1,d2,d3});
    int mn = min({d1,d2,d3});
    

    int sum = d1+d2+d3;
    if(mx== sum-mx){
        return mn>0;
    }

    return false;
}

bool isAlmost(int &x1,int &y1,int &x2,int &y2,int &x3,int &y3){
    vector<pair<int,int>> v{{1,0},{-1,0},{0,1},{0,-1}};
    
    for(auto [dx,dy]:v){
        int xx1 = x1+dx;
        int yy1 = y1+dy;
        if(isRight(xx1,yy1,x2,y2,x3,y3))
            return true;

        int xx2 = x2+dx;
        int yy2 = y2+dy;
        if(isRight(x1,y1,xx2,yy2,x3,y3))
            return true;


        int xx3 = x3+dx;
        int yy3 = y3+dy;
        if(isRight(x1,y1,x2,y2,xx3,yy3))
            return true;
    }

    return false;
}

void solve()
{
    int x1,y1,x2,y2,x3,y3;
    cin >> x1>>y1>>x2>>y2>>x3>>y3;

    if(isRight(x1,y1,x2,y2,x3,y3)){
        cout << "RIGHT" << ln;
        return;
    }
    if(isAlmost(x1,y1,x2,y2,x3,y3)){
        cout << "ALMOST" << ln;
        return;
    }

    cout << "NEITHER" << ln;
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

