#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define x first
#define y second
#define ii pair<int,int>
const ll N = 2e3+50;
int t;
vector<vector<int>> dp(N,vector<int>(N,INT_MAX));

void solve()
{
    int n,d,c,f,u,tod=0;
    cin>>n;
    dp[0][0]=0;
    for (int i=0;i<n;i++)
    {
        cin>>d>>c>>f>>u;
        tod+=d;
        int vn=(c+f+u)/2-c+1;
        for (int j=0;j<N;j++)
        {
            if (dp[i][j]!=INT_MAX)
            {
                dp[i+1][j]=min(dp[i+1][j],dp[i][j]);

                if (vn<=u)
                {
                    if (vn<=0&&j+d<=N)
                    {
                        dp[i+1][j+d]=min(dp[i+1][j+d],dp[i][j]);
                    }else if (j+d<=N)
                    {
                        dp[i+1][j+d]=min(dp[i+1][j+d],dp[i][j]+vn);
                    }
                }
            }
        }
    }
    int cnt=tod/2+1;
    int ans=INT_MAX;
    for (int i=cnt;i<N;i++)
        ans=min(ans,dp[n][i]);
    if (ans==INT_MAX) cout<<"impossible";
    else cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
}

