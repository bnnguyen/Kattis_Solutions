#include <bits/stdc++.h>
#define ll long long
#define int ll

using namespace std;
const ll inf = (ll)1 << 55, N=2e3+10;
int n,m,e[N],a[N],dp[N][N];

int bf(int x, int y)
{
    if (abs(e[x]-a[y])<=15) return 7;
    if (abs(e[x]-a[y])<=23) return 6;
    if (abs(e[x]-a[y])<=43) return 4;
    if (abs(e[x]-a[y])<=102) return 2;
    return 0;
}

void solve()
{
    cin>>n>>m;
    for (int i=1;i<=n;i++) cin>>e[i];
    for (int i=1;i<=m;i++) cin>>a[i];
    for (int i=n;i>0;--i)
    for (int j=m;j>0;--j)
    {
        dp[i][j]=max(dp[i+1][j],max(dp[i][j+1],bf(i,j)+dp[i+1][j+1]));
    }
    cout<<dp[1][1];
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

