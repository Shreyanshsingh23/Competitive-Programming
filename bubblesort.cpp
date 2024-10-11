#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n ; cin >> n;
    vector<int> m (n);

    for (int i = 0; i< n; i++){
        cin >> m[i]; 
    }

    vector<int> v  (m.begin(),m.end());
    vector<int> w  (m.begin(),m.end());

    int asccount = 0, descount = 0;

    // bubble(v,v.size()+1,0);

    for(int i = 0; i< n; i++){
        for(int j = 1; j < n-i; j++){
            if(v[j-1]  > v[j]){
                int temp = v[j];
                v[j]= v[j-1];
                v[j-1]= temp;
                asccount++;
            }
        }
    }




    for(int i = 0; i< n; i++){
        for(int j = 1; j < n-i; j++){
            if(w[j-1]  < w[j]){
                int temp = w[j];
                w[j]= w[j-1];
                w[j-1]= temp;
                descount++;
            }
        }
    }
   
   cout << min(asccount,descount) << endl;


}