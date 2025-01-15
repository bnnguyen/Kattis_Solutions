#include <bits/stdc++.h>
#define ll long long
#define int ll
#define ii pair<ll,ll>

using namespace std;
int n,m;
unordered_map<int,int> h;

void solve()
{
    cin>>n>>m;
    for (int v,k=1; k<=m; k++)
    {
        cin>>v;
        h[v]=k;
        ll res = n-h.size();
        res*=k;
        for (auto it:h) res+=k-it.second;
        cout<<res<<'\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
