#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& a){
    int n = a.size();
    for(int j = 0; j< n-1; j++)
    {
    int num = a[j+1];
    int correctIndex = -1;

    for(int i = 0; i< j; i++){
        if(a[i] > num){
            correctIndex = i;
            break;
        }
    }

    for(int i = j+1; i > correctIndex; i-- ){
        swap(a[i],a[i-1]);
    }}
}
int main(){
    vector<int> a {3,6,9,10,7,2,12,1};
    insertionSort(a);
    for(auto e :a){
        cout << e << ' ';
    }
}