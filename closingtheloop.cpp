#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e3+10;
int t;
vector<int> r,b;
bool cmp(int one, int two)
{
    return one>two;
}
void solve()
{
    int n;
    cin>>n;
    r.clear();
    b.clear();
    while (n--)
    {
        ll u; char c;
        cin>>u>>c;
        if (c=='R') r.push_back(u);
        else b.push_back(u);
    }
    sort(r.begin(),r.end(),cmp);
    sort(b.begin(),b.end(),cmp);
    ll ans=0;
    for (int i=0;i<min(r.size(),b.size());i++)
    {
        ans+=r[i]+b[i]-2;
    }
    cout<<ans<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }
}

