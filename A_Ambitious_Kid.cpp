#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int minVal = INT_MAX;
    vector<int> v (n);
    for(int i = 0;i < n; i++){
        cin >> v[i];
        minVal = min(minVal, abs(0-v[i]));
    }

    

    cout << minVal << endl;
}