    #include<bits/stdc++.h>
    using namespace std;

    #define lli long long int
    #define ln endl
    #define ln "\n"
    #define vl vector<lli>
    #define all(v) v.begin(), v.end()
    #define var1(t) lli t; cin >> t;
    #define var2(n,k) lli n,k; cin >> n >> k;
    #define var3(n,k,r) lli n,k,r; cin >> n >> k >> r;
    #define pb      emplace_back


     //using hashing technique to calculate the frequencies of all elements of array

    vector<int> hashing(vector<int> v, int n){
        vector<int> ans;
        unordered_map<int,int> mp; //first is key and second is value

        for(int i = 0; i < n; i++){
            mp[v[i]]++;      //v[i] is key
            //Here v[i] works as key in map... if v[i] is already present in map, it increments tha value associated with it and if not present then it makes a new entry with v[i] as key and initial value as 0 and then increments it
        }
         
        //now we will find that value associated to which key is maximum, that means that key has occurred maximum time in the array

        int maxFreq = 0;
        int maxElement = -1;

        for(pair<int,int> e: mp){
            if(e.second > maxFreq){
                maxFreq = e.second;
                maxElement = e.first;
            }
        }

        ans.pb(maxElement);  // which element occurred most
        ans.pb(maxFreq);     // frequency of most occurred element

        return ans;
    }
 


    void solve(){
        int n; cin >> n;
    vector<int>v(n);
	for (int i = 0; i < n; ++i){ 
		cin >> v[i];
    }
  
    vector<int> f = hashing(v,n);

    int freq = f[1]; // frequency of most occurred element
 
    int steps = 0;

    while(freq < n){
        steps++;  // for copying the array

        int temp =  min(freq,n-freq);
        steps+= temp;
        freq += temp;

    }

    cout << steps << ln;

    }


    int main(){
     
    int t; cin >> t;
        while(t--){
           
            solve();
        }
    return 0;
    }

