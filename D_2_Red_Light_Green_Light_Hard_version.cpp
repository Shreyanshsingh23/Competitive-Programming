#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; ll k;
    cin >> n >> k;
    vector<ll> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    vector<ll> d(n);
    for(int i = 0; i < n; i++) cin >> d[i];
    int q;
    cin >> q;
    vector<ll> a(q);
    for(int i = 0; i < q; i++) cin >> a[i];
    for(int j = 0; j < q; j++) {
        ll pos = a[j], t = 0;
        int dir = 1;
        if(pos < p[0]) {
            t = p[0] - pos;
            pos = p[0];
        } else if(pos > p[n-1]) {
            cout << "YES" << endl;
            continue;
        } else {
            auto it = lower_bound(p.begin(), p.end(), pos);
            int i = it - p.begin();
            if(*it != pos) {
                t = p[i] - pos;
                pos = p[i];
            }
        }
        auto it = lower_bound(p.begin(), p.end(), pos);
        int i = it - p.begin();
        map<pair<int, int>, ll> visited;
        while(true) {
            pair<int, int> state = {i, dir};
            if(visited.count(state)) {
                ll c = t - visited[state];
                if(c % k == 0) {
                    cout << "NO" << endl;
                    break;
                }
                ll g = __gcd(c, k);
                if(dir == 1 && i == n-1) {
                    ll t0 = visited[state] % k;
                    ll target = d[i];
                    if((target - t0) % g == 0) cout << "NO" << endl;
                    else cout << "YES" << endl;
                    break;
                } else if(dir == -1 && i == 0) {
                    ll t0 = visited[state] % k;
                    ll target = d[i];
                    if((target - t0) % g == 0) cout << "NO" << endl;
                    else cout << "YES" << endl;
                    break;
                } else {
                    cout << "YES" << endl;
                    break;
                }
            }
            visited[state] = t;
            if(t % k == d[i]) dir = -dir;
            t++;
            pos += dir;
            if(dir == 1) {
                if(i == n-1) {
                    cout << "YES" << endl;
                    break;
                }
                int next_i = i + 1;
                ll dist = p[next_i] - pos;
                t += dist;
                pos = p[next_i];
                i = next_i;
            } else {
                if(i == 0) {
                    cout << "YES" << endl;
                    break;
                }
                int next_i = i - 1;
                ll dist = pos - p[next_i];
                t += dist;
                pos = p[next_i];
                i = next_i;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}