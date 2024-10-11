// #include<bits/stdc++.h>
// using namespace std;

// #define int  long long
// #define ln endl;
// //#define ln "\n"
// #define vl vector<int>
// #define all(v) v.begin(), v.end()
// #define int1(t) int t; cin >> t;
// #define int2(n,k) int n,k; cin >> n >> k;
// #define int3(n,k,r) int n,k,r; cin >> n >> k >> r;
// #define pb      emplace_back
// #define FOR(i,n) for(int i = 0; i< n; i++)

// int s1=0,s2=0,ans=INT_MAX;
// void 

// void f()
// const bool testcase = 0;

// void solve(){
//     int1(n)
//     vl v(n);
//     int s1=0,s2=0;
//     // function<void(int,int)
//     int s = *max_element(all(v));
//     int e = sum;
//     int ans = 0;
//     while(s<=e){
//         int mid = s + (e-s)/2;
//         int count = 1;
//         int temp = 0;
//         cout << "s : e : m : " << s << " " << e << " " << mid << ln;
//         for(auto x : v){
//             temp += x;
//             if(temp > mid){
//                 count ++;
//                 temp = x;
//             }
//         }
//         if(count > 2){
//             s = mid+1;
//         }
//         else {
//             ans = mid;
//             e = mid -1;
//         }
//     }

//     cout << s<< ln;
// }


// signed main(){
//   cin.tie(nullptr)->sync_with_stdio(false);
    
//   int t = 1;
//   testcase and cin >> t;
//   while(t--){
//        solve();
//     }
//  return 0;
// }

dp

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ln endl

void solve() {
    int n;
    cin >> n;
    vector<int> departments(n);
    int total_sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> departments[i];
        total_sum += departments[i];
    }
    
    // We need to find the largest subset sum <= total_sum / 2
    int target = total_sum / 2;
    
    // DP array where dp[i] is true if a subset sum of i is possible
    vector<bool> dp(target + 1, false);
    dp[0] = true; // A sum of 0 is always possible
    
    // Iterate over each department and update the DP array
    for (int i = 0; i < n; i++) {
        int department_size = departments[i];
        // Update dp array in reverse to avoid using the same item twice
        for (int j = target; j >= department_size; j--) {
            dp[j] = dp[j] || dp[j - department_size];
        }
    }
    
    // Find the largest possible subset sum that is <= total_sum / 2
    int best_sum = 0;
    for (int i = target; i >= 0; i--) {
        if (dp[i]) {
            best_sum = i;
            break;
        }
    }
    
    // The result will be the larger of the two group sums
    int group_A = best_sum;
    int group_B = total_sum - best_sum;
    cout << max(group_A, group_B) << ln;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
