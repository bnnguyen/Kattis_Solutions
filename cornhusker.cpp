#include <bits/stdc++.h>
#define ll long long
#define int ll
#define ii pair<ll,ll>

using namespace std;
const int N = 1e6+10;
int ans;

void solve()
{
    for (int i=0;i<5;i++)
    {
        int u,v;
        cin>>u>>v;
        ans += u*v;
    }
    int u; cin>>u;
    ans/=5; ans*=u;
    cin>>u;
    cout<<ans/u;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

