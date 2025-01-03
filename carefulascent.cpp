#include <bits/stdc++.h>
#define ll long long
#define int ll

using namespace std;
const ll inf = (ll)1 << 55, N=2e3+10;
vector<vector<ll>> shields;
vector<double> md;
double x,y;
ll n;

void solve()
{
    ll cur=0;
    double dist=0.0,modi;
    cin>>x>>y;
    cin>>n;
    shields.resize(n);
    for (int i=0;i<n;i++)
    {
        ll u,v;
        cin>>u>>v>>modi;
        shields[i].push_back(u);
        shields[i].push_back(v);
        shields[i].push_back(i);
        md.push_back(modi);
    }
    std::sort(shields.begin(),shields.end());

    for (int j=0;j<n;j++)
    {
        dist+=shields[j][0]-cur;
        cur=shields[j][1];
        dist +=(shields[j][1]-shields[j][0])*md[shields[j][2]];
    }
    dist+=y-cur;
    cout<<fixed<<setprecision(6)<<x/dist;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
