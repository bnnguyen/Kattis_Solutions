#include <bits/stdc++.h>
#define ll long long
#define int ll
#define ii pair<ll,ll>

using namespace std;
const ll inf = (ll)1 << 55, N=2e3+10;
ll t;
struct Cities {double x,y,dt; string name;};

double dst(double x, double y, double a, double b, double c)
{
    return abs(a*x+b*y+c)/sqrt(a*a+b*b);
}

void solve()
{
    double x0,y0,x1,y1;
    cin>>x0>>y0>>x1>>y1;
    double a=y0-y1,b=x1-x0,c=x0*y1-x1*y0;
    int m;
    cin>>m;
    double mdst=DBL_MAX;
    vector<Cities> ct(m);
    for (int i=0;i<m;i++)
    {
        cin>>ct[i].name>>ct[i].x>>ct[i].y;
        ct[i].dt=dst(ct[i].x,ct[i].y,a,b,c);
        mdst=min(ct[i].dt,mdst);
    }
    for (int i=0;i<m;i++)
    {
        if(ct[i].dt==mdst) cout<<ct[i].name<<' ';
    }
    cout<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--) solve();
}

