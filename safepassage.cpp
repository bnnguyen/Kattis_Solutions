#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 20;
int n;
vector<int> a;
int tt()
{
    if (a.size()<=2) return a[a.size()-1];
    else if (a.size()==3) return (a[1]+a[2]+a[0]);
    else
    {
        int ans=0;
        if (a[1]*2<a[0]+a[a.size()-2])
        {
            ans+=a[1]*2+a[0]+a[a.size()-1];
            a.pop_back();
            a.pop_back();
            ans+=tt();
        }
        else
        {
            ans+=a[a.size()-1]+a[0];
            a.pop_back();
            ans+=tt();
        }
        //cout<<ans<<'\n';
        return ans;
    }
}
void solve()
{
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int u; cin>>u;
        a.push_back(u);
    }
    sort(a.begin(),a.end());
    cout<<tt();
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

