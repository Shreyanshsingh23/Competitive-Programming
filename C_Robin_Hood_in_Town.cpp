// #include<bits/stdc++.h>
// using namespace std;

// #define lli long long int
// //#define forin for(lli (i); (i) < (n); (i)++)
// #define ln endl
// #define vl vector<lli>
// #define all(v) v.begin(), v.end()


// int main(){
   
//    lli t; cin >> t;
//     while(t--){
//         lli n; cin >> n;
       
//         vl v(n);
//         lli sum = 0;
//          for(lli i = 0; i< n; i++){
//           cin >> v[i];
//           sum += v[i];
//         }
//          if(n<3){
//             cout << -1 << ln;
//             continue;
//         }
        
//          // cout << "SUM" << sum<< ln;

//         sort(all(v));

//         lli index = (n/2);
//         lli minVal = v[index];

//          // cout << "MIN" << minVal<< ln;

//         lli ans = ((minVal*1.00)*2*n) - sum;

//         if(ans <= 0){
//             cout << 0 << ln;
//         }
//         else{ 
//         cout << ans + 1<< ln;

//         }

//     }
//  return 0;
// }

#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ln endl
#define vl vector<lli>
#define all(v) v.begin(), v.end()

int main() {
    lli t; 
    cin >> t;
    while (t--) {
        lli n;
        cin >> n;

        vl v(n);
        lli sum = 0;
        
       
        for (lli i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        
        
        if (n < 3) {
            cout << -1 << ln;
            continue;
        }

        
        sort(all(v));

        
        lli index = (n / 2);
        lli minVal = v[index];

        
        lli ans = ((2LL *minVal  * n) - sum+1);

       
        if (ans <= 0) {
            cout << 0 << ln;
        } else {
            cout << ans  << ln;
        }
    }
    return 0;
}// Accepted Solution now 




// //upsolving from contest answers

// #include<bits/stdc++.h>
// #define itn int
// #define Int int
// #define mian main
// #define stirng string
// #define ll long long
// #define fi first
// #define se second
// #define endl '\n'
// #define INF 0x3f3f3f3f
// #define lowbit(x) (x & -x)
// #define IOS  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
// using namespace std;

// typedef pair<int, int> PII;
// typedef int64_t i64;
// const int MOD = 1e9 + 7;
// const int N = 1e5+10;

// void solve()
// {
// 	int n;
// 	cin >> n;
// 	vector<int> a(n);
// 	ll sum = 0;
// 	for (int i = 0; i < n; i ++ )
// 	{
// 		cin >> a[i];
// 		sum += a[i];
// 	}
// 	if(n == 1 || n == 2)
// 	{
// 		cout << "-1\n";
// 		return;
// 	}
// 	sort(a.begin(), a.end());
// 	int k = n / 2 + 1;
// 	ll ans = 2LL * n * a[k - 1] - sum + 1;
// 	if(ans < 0) ans = 0;
// 	cout << ans << endl;
// }

// int main()
// {
// 	IOS;
// 	int _ = 1;
// 	cin >> _;
// 	while (_ --)
// 		solve();
// 	return 0;
// }
