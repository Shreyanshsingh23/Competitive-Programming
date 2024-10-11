#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ln endl;
// #define ln "\n"
#define vl vector<int>
#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k;  cin >> n >> k;
#define int3(n, k, r) int n, k, r;  cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 0;
// void sortLast(vl &v,int j){
//     int n = v.size();
//    swap(v[j],v[n-1]);
// }

void actualSort(vl& v)
{
    int n = v.size();
    int minn=v[n-1];
    int index =-1;

    for(int i = 0; i< n; i++){
        if(minn < v[i]){
            index = i;
            break;
        }
    }
    
    for(int i = index ;i <n; i++){
        swap(v[i],v[n-1]);
    }

}
void print(vl& v){
     
    for (auto e : v)
    {
        cout << e << " ";
    }
}
void solve()
{
    vl v{2,8,10,12,16,18,7};
    actualSort(v);
    print(v);
  
}

signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t = 1;
    testcase and cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
