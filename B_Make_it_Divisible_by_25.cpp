#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln endl;
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define vi vector<int>
#define v vector
#define vvi vector<vector<int>>                //vvi a (n,vi(m,0))
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 1;


void solve()
{
   string n; cin >> n;
   int rearNumbers5 = 0;
   int midNumbers5 =0;
   bool found5 = false;
   for(int i = n.size()-1; i>= 0;i--){ //checking for 25,75
        if(!found5 and n[i] == '5'){
          found5 = true;
          continue;
        }
        if(!found5) rearNumbers5 ++;
        if(found5 and (n[i] != '2' and n[i] != '7'))midNumbers5++;

        if(found5 and (n[i] == '2' or n[i] == '7')){
          break;
        }
   }

   int rearNumbers0 = 0;
   int midNumbers0 =0;
   bool found0 = false;
   for(int i = n.size()-1; i>= 0;i--){ //checking for 00,50
        if(!found0 and n[i] == '0'){
          found0 = true;
          continue;
        }
        if(!found0) rearNumbers0 ++;
        if(found0 and (n[i] != '0' and n[i] != '5'))midNumbers0++;

        if(found0 and (n[i] == '5' or n[i] == '0')){
          break;
        }
   }
  //  cout << "5: " << rearNumbers5+midNumbers5 << ln;
  //   cout << "0: " << rearNumbers0+midNumbers0 << ln;
   cout << min(rearNumbers0+midNumbers0,rearNumbers5+midNumbers5) << ln;



   
}

signed main()
{
    ShreyanshSinghGautam

    int t = 1;
    testcase and cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
