#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 110;
int n,m;
char a[N][N];
const int v[3]={0,-1,1},h[3]={0,-1,1};
void dfs(int x, int y)
{
    //cout<<x<<' '<<y<<'\n';
    a[x][y]='.';
    for (int i=0;i<3;i++)
    for (int j=0;j<3;j++)
    {
        int x1=x+v[i],y1=y+h[j];
        if (x1>0&&x1<=n&&y1>0&&y1<=m)
            if(a[x1][y1]=='#')
            dfs(x1,y1);
    }
}
void solve()
{
    int ans=0;
    cin>>n>>m;
    for (int i=0;i<=n+1;i++)
    for (int j=0;j<=m+1;j++)
    {
        a[i][j]='.';
        if (i>0&&i<=n&&j>0&&j<=m)
            cin>>a[i][j];
    }
    for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++)
        if(a[i][j]=='#')
        {
            dfs(i,j);
            ans++;
        }
    cout<<ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

