#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& a){
    int n = a.size();
    for(int j = 0; j< n-1; j++)
     {   for(int i = 0; i< n-1; i++){
            if(a[i] > a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
   }
}
int main(){
    vector<int> a {3,6,9,10,7,2,12,1};
    bubbleSort(a);
    for(auto e :a){
        cout << e << ' ';
    }
        cout << endl;

}