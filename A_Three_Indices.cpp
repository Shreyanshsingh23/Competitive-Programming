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


    void solve(){
        int n; cin >> n;
    vector<int>a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 1; i < n - 1; ++i) {
		if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
			cout << "YES" << endl;
			cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
			return;
		}
	}
	cout << "NO" << endl;

    }

    int main(){
     
    int t; cin >> t;
        while(t--){
            // lli n,k; cin >> n >> k;
            solve();
        }
    return 0;
    }

