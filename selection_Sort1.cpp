#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& a){
    int n = a.size();
    int actualIndex = 0;
    
    while(actualIndex < n-1)
   { 
      int minIndex  = 0;
      int minn = INT_MAX;
    for(int i = actualIndex; i < n; i++){
        if(a[i] < minn){
            minn = a[i];
            minIndex = i;
        }
        swap(a[minIndex],a[actualIndex]);
    }
    actualIndex ++;
    }
}
int main(){
    vector<int> a {3,2,5,6,2,2,2,2,-4,-6,1,0};
   
    selectionSort(a);
    for(auto e :a){
        cout << e << ' ';
    }
}