#include <bits/stdc++.h>
#define ll long long
#define int ll
#define ii pair<ll,ll>

using namespace std;
const int N = 1e6+10;
int n, a[N], mih[N],mah[N];

void solve()
{
    int ans=0;
    cin>>n;
    mih[n+1]=INT_MAX;
    mah[0]=INT_MIN;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        mah[i]=max(mah[i-1],a[i]);
        //cout<<i<<' '<<mah[i]<<'\n';
    }
    for (int i=n;i>0;i--)
    {
        mih[i]=min(mih[i+1],a[i]);
        if (i==n)
        {
            if (a[i]>=mah[i-1]) ans++;
        }
        else if (i==1)
        {
            if (a[i]<mih[i+1]) ans++;
        }
        else if (a[i]>=mah[i-1]&&a[i]<mih[i+1]) ans++;
        //cout<<i<<' '<<mih[i]<<' '<<ans<<'\n';
    }
    cout<<ans<<' ';
    int t=min(ans,100LL);
    for (int i=1;i<=n&&t>0;i++)
    {
        if (i==n)
        {
            if (a[i]>=mah[i-1]) cout<<a[i]<<' ',t--;
        }
        else if (i==1)
        {
            if (a[i]<mih[i+1]) cout<<a[i]<<' ',t--;
        }
        else if (a[i]>=mah[i-1]&&a[i]<mih[i+1]) cout<<a[i]<<' ',t--;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

