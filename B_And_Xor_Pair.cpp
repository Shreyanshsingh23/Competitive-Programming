#include<bits/stdc++.h>
using namespace std;


int count_valid_pairs(long long n) {
    
    long long m = n * 2;
    int count = 0;
    
    for (long long x = 0; x <= (2)*m; x++) {
        long long y = x ^ n;
        if ((x & y) == m) {
            count++;
        }
    }
    
    return count;
}
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        long long m = 2 * n;

        int count = 0;
        //int result = count_valid_pairs(n);
        for(long long i = 0; i<= 2* m ; i++){
            long long y = i ^ n; //XOR

            if((i & y) == m){
               count ++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}