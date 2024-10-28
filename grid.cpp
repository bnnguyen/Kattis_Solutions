#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define x first
#define y second
#define ii pair<int,int>
const ll N = 2e5+10;
int t;
int n,m;
int a[510][510],val[510][510],h[4]={-1,1,0,0},v[4]={0,0,1,-1};
queue<pair<int,int>> q;

void bfs()
{
    val[1][1]=0;
    q.push({1,1});
    ii u;
    do
    {
        u=q.front();
        q.pop();
        ii v;
        v.x=u.x; v.y=u.y-a[u.x][u.y];
        if (v.x>0&&v.x<=n&&v.y>0&&v.y<=m&&val[v.x][v.y]>val[u.x][u.y]+1)
            val[v.x][v.y]=val[u.x][u.y]+1,q.push(v);

        v.y=u.y+a[u.x][u.y];
        if (v.x>0&&v.x<=n&&v.y>0&&v.y<=m&&val[v.x][v.y]>val[u.x][u.y]+1)
            val[v.x][v.y]=val[u.x][u.y]+1,q.push(v);

        v.y=u.y; v.x=u.x-a[u.x][u.y];
        if (v.x>0&&v.x<=n&&v.y>0&&v.y<=m&&val[v.x][v.y]>val[u.x][u.y]+1)
            val[v.x][v.y]=val[u.x][u.y]+1,q.push(v);

        v.x=u.x+a[u.x][u.y];
        if (v.x>0&&v.x<=n&&v.y>0&&v.y<=m&&val[v.x][v.y]>val[u.x][u.y]+1)
            val[v.x][v.y]=val[u.x][u.y]+1,q.push(v);

    } while (val[n][m]==N&&!q.empty());
}
void solve()
{
    cin>>n>>m;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++)
    {
        char c;
        cin>>c;
        a[i][j]=c-'0';
        val[i][j]=N;
    }
    bfs();
    if (val[n][m]==N) cout<<-1;
    else cout<<val[n][m];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
}

