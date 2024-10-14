#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
const ll N = 5e5+10;
struct swc
{
    ll l,r;
    char s;
};

swc a[N];
vector<ll> g[N],ans,cnt(N);
vector<bool> visited(N,false);
ll n,m;
char fans[N];

void dfs(int v) {
    visited[v] = true;
    for (int u : g[v]) {
        if (!visited[u])
            dfs(u);
    }
    //cout<<v<<'\n';
    ans.push_back(v);
}
void topo_sort()
{
    ans.clear();
    for (int i = 1; i <= m; ++i) {
        if (!visited[i]) {
            dfs(i);
        }
    }
    reverse(ans.begin(), ans.end());
}

void solve()
{
    cin>>n>>m;
    for (int i=1;i<=m;i++)
    {
        cin>>a[i].s>>a[i].l>>a[i].r;
        g[i].push_back(a[i].l);
        g[i].push_back(a[i].r);
    }
    topo_sort();
    cnt[1]=n;
    for (int u:ans)
    {
        //cout<<u<<'\n';
        if (cnt[u]%2==0)
        {
            fans[u]=a[u].s;
            cnt[a[u].l]+=cnt[u]/2;
            cnt[a[u].r]+=cnt[u]/2;
        }
        else
        {
            if (a[u].s=='L')
            {
                fans[u]='R';
                cnt[a[u].l]+=cnt[u]/2+1;
                cnt[a[u].r]+=cnt[u]/2;
            }
            else
            {
                fans[u]='L';
                cnt[a[u].l]+=cnt[u]/2;
                cnt[a[u].r]+=cnt[u]/2+1;
            }
        }
    }
    for (int i=1;i<=m;i++) cout<<fans[i];
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
