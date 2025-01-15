
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
//int t;
vector<int> g[N];
bool p[N];

void dfs(int u)
{
    p[u]=1;
    for (int v:g[u])
    {
        if (p[v]) continue;
        else dfs(v);
    }
}

void solve()
{
    int n,m;
    cin>>n>>m;
    while (m--)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    bool f=1;
    for (int i=1;i<=n;i++)
        if (!p[i]) cout<<i<<'\n',f=0;
    if (f) cout<<"Connected";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
