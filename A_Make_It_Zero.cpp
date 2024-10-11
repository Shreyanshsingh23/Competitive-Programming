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



void solve()
{
    int n;
    cin >> n;
    vl v(n);
    FOR(i, n)
        cin >> v[i];

    if ((n & 1) == 1)
    { // no. of elements are odd
        cout << 4 << ln;
        for (int i = 0; i < 2; i++)
        {
            cout << 1 << " " << n - 1 << ln;
        }
        for (int i = 0; i < 2; i++)
        {
            cout << n - 1 << " " << n << ln;
        }
    }
    else
    {
        cout << 2 << ln;
        for (int i = 0; i < 2; i++)
        {
            cout << 1 << " " << n << ln;
        }
    }
}

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        // lli n,k; cin >> n >> k;
        solve();
    }
    return 0;
}
