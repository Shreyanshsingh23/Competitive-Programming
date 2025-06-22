#include <bits/stdc++.h>
using namespace std;

const int N = 400010;
int t, n;
vector<int> a, b;
int ft[N];

void update(int x, int v) {
  for (; x < N; x += x & -x) ft[x] += v;
}

int query(int x) {
  int res = 0;
  for (; x > 0; x -= x & -x) res += ft[x];
  return res;
}

int query(int l, int r) {
  return query(r) - query(l - 1);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> t;
  for (int _ = 1; _ <= t; _++) {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    b.resize(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    deque<int> player, dealer;
    for (int i = 0; i < n; i++) player.push_back(a[i]);
    for (int i = 0; i < n; i++) dealer.push_back(b[i]);
    memset(ft, 0, sizeof(ft));
    for (int i = 0; i < n; i++) update(a[i], 1);
    int ans = 0;
    int score = 0;
    int m = query(b[0] + 1, 2 * n);
    int total_score = min(m, n);
    ans = total_score;
    for (int r = 0; r < n; r++) {
      int p = player.front();
      int d = dealer.front();
      if (p > d) {
        score++;
        update(p, -1);
        m = query(d + 1, 2 * n);
        total_score = score + min(m, n - r - 1);
        ans = max(ans, total_score);
        player.pop_front();
        dealer.push_front(d);
      } else {
        player.push_front(p);
        dealer.pop_front();
      }
    }
    ans = max(ans, score);
    cout << ans << '\n';
  }
  return 0;
}