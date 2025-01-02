#include <bits/stdc++.h>
#define ll long long
#define int ll
#define ii pair<ll,ll>

using namespace std;
int N,M;
vector<int> c;
vector<vector<int>> dp;

int dfs(int n, int m)
{
    if (n>=c.size()) return 0;
    if (dp[n][m]!=-1) return dp[n][m];
    int res=dfs(n+1,n?m*2/3:m);
    res=max(max(res,dfs(n+2,m)),dfs(n+3,M));
    res+=min(c[n],m);
    dp[n][m]=res;
    return res;
}

void solve()
{
    cin>>N>>M;
    c.resize(N+1);
    dp.resize(N+1,vector<int>(M+1,-1));
    for (int i=1;i<=N;i++) cin>>c[i];
    cout<<dfs(0,M);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

