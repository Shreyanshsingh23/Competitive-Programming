    #include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
   
    while(t--)
    {
        int n;cin>>n;
        set<int> y0;
        set<int> y1;

        for(int i = 0; i < n; i++)
        {
            int x , y; cin >> x >>y;
            if(y==0){
                y0.insert(x);
            }
            else{
                y1.insert(x);
            }
        }

       

        long long ans = 0;

        for(int e : y0)
        {
            if(y1.find(e) != y1.end()){  //common number mil gya
                ans += n-2;
            }

            int succ = e+1;
            int prec =  e-1;

            if(y1.find(succ) != y1.end()  && y1.find(prec) != y1.end() )  {
                ans++;
            }         
        }

        for(int e:y1)
        {
            int succ = e+1;
            int prec = e-1;
            if(y0.find(succ) != y0.end()  && y0.find(prec) != y0.end() )  {
                ans++;
            }   
        }
        cout << ans << endl;
    }
}