#include <bits/stdc++.h>
#define ll long long
#define int ll
#define ii pair<ll,ll>

using namespace std;
int n,c;

void solve()
{
    cin>>n>>c;
    vector<int> w(n);
    int sum=0;
    for (int i=0;i<n;i++) {
        cin>>w[i];
        sum+=w[i];
    }
    if(sum<=c) {
        cout<<sum<<'\n';
        return;
    }
    sort(w.begin(),w.end());
  vector<int> prefix(n);
  prefix[0] = 0;
  for (int i = 1; i < n; ++i) prefix[i] = prefix[i-1]+w[i-1];

  vector<vector<bool>> T(n, vector<bool>(c+1, false));
  for (int i = n-1; i >= 0; --i) {
    if (i+1<n) for (int j = 1; j <= c; ++j) {
      if (T[i+1][j]) T[i][j] = true;
      if (j>=w[i] && T[i+1][j-w[i]]) T[i][j] = true;
    }
    T[i][0] = T[i][w[i]] = true;
  }

  for (int waste = w.back()-1; waste >= 0; --waste) {
    auto itr = upper_bound(w.begin(), w.end(), waste);
    int i = distance(w.begin(), itr);
    int t = c-prefix[i]-waste;
    if (t < 0) continue;
    if (T[i][t]) {
      cout << c - waste << '\n';
      return;
    }
  }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
