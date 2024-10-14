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
#define vii vector<vector<int>>                //vii a (n,vi(m,0))
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)

typedef pair<int, int> pi;

const bool testcase = 1;


void solve(){
   string a, b; cin >>a >> b;
   int alen = a.size();
   int blen = b.size();
   int time = 0;
   if(blen < alen){
    swap(a,b);  // now alen is smaller or equal
   }

    int done = 0;

   for(int i = 0; i< min(alen,blen); i++){
        if(a[i] != b[i] or i == min(alen,blen)-1)
        {   done = i;
            
            break;
        }
        else{
            time++;
        }
   }
    

   if(done > 0)
   {
    time++;
   }
   if(done == alen-1 and alen == blen and a[alen-1] == b[alen-1]){
    time++;
   }

//    cout << time << ln

        if(done == 0){
            time += alen + blen;
        }
        else if(done == min(alen,blen)-1 and alen == blen)
        {
            time +=0;
        }
        else if(done == min(alen,blen)-1)
        {
            time += blen-done;
        }
        else
        {
            time += (alen-done) + (blen-done);
        }
   
        cout << time << ln;
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

    

  