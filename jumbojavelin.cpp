#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
//int t;
void solve()
{
    int n;
    cin>>n;
    ll ans=-n+1;
    while (n--)
    {
        ll u;
        cin>>u;
        ans+=u;
    }
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
