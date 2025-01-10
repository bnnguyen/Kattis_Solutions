#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
bool p[1010];
int t;
vector<int> g[1010];
void dfs(int u)
{
    p[u]=1;
    for (int v:g[u])
    if (!p[v])
    {
        dfs(v);
    }
}
void solve()
{
    int n,m,d=0;
    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        p[i]=0;
        g[i].clear();
    }
    while (m--)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i=0;i<n;i++)
        if (!p[i])
        {
            d++;
            dfs(i);
        }
    cout<<d-1<<'\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while (t--)
        solve();
    return 0;
}

