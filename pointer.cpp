#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a {3,4,6,7,4,3,25};

    int maxx = *max_element(a.begin(),a.end());
    cout << maxx << endl;

    int ab = 5;
    // int* ptr = &ab;
    // cout << ptr << endl;
    // cout << *ptr << endl;

    auto ams = max_element(a.begin(),a.end());
    cout << ams << endl;


}