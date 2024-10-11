// #include<bits/stdc++.h>
// using namespace std;
// #define lli long long int
// #define ln endl
// #define vl vector<lli>
// #define all(v) v.begin(), v.end()

// int main(){

//         int i = 0;
//         int t; cin >> t ;
//         while(t--){
//             lli n,x; cin >> n >> x ;
//             i++;

//             vl v(n);

//             for(lli i = 0; i < n; i++){
//                 cin >> v[i];
//             }
//            lli ans = 0;
//            lli minVal = *min_element(all(v));
//             if(n==2){
//               ans = minVal;
//             }
//             else{
//                  ans = ((n-1)*(2*minVal))+ minVal ;
//             }

//             //cout << "Ans: " << ans << ln;

//             if(ans <= x){
//                 cout << "Case #" << i << ": YES" << ln;
//             }
//             else{
//                   cout << "Case #" << i << ": NO" << ln;
//             }
//         }

//         return 0;
//     }

#include <bits/stdc++.h>
using namespace std;

bool canTravelWithinTime(vector<int> &times, int K)
{
    sort(times.begin(), times.end());

    int n = times.size();

    // Handle the case where there's only one traveler
    if (n == 1)
    {
        return times[0] <= K;
    }

    int totalTime = 0;

    // Strategy: Keep taking the two slowest across and bring back the fastest to optimize time
    while (n > 3)
    {
        // Strategy: Two options for crossing:
        // 1. Slowest two cross, fastest returns (two at a time)
        // 2. Fastest two cross, fastest returns (minimizing return trips)
        int option1 = times[1] + times[0] + times[n - 1] + times[1]; // slowest two, fastest returns
        int option2 = times[n - 1] + times[n - 2] + 2 * times[0];    // fastest two cross

        totalTime += min(option1, option2);

        n -= 2; // Reduce the number of people left to cross
    }

    // Handle the remaining cases when there are 2 or 3 people left
    if (n == 3)
    {
        totalTime += times[0] + times[1] + times[2];
    }
    else if (n == 2)
    {
        totalTime += times[1];
    }

    return totalTime <= K;
}

int main()
{
    int T; // Number of test cases
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        int N, K; // Number of travelers and the maximum allowed time
        cin >> N >> K;

        vector<int> times(N); // The times it takes each traveler to cross
        for (int i = 0; i < N; ++i)
        {
            cin >> times[i];
        }

        // Call function to check if all travelers can cross within K seconds
        if (canTravelWithinTime(times, K))
        {
            cout << "Case #" << t << ": YES" << endl;
        }
        else
        {
            cout << "Case #" << t << ": NO" << endl;
        }
    }

    return 0;
}
