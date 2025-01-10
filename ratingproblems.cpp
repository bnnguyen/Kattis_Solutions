#include <bits/stdc++.h>
#define ll long long
#define int ll
#define ii pair<ll,ll>

using namespace std;
int n,k;

void solve()
{
    cin>>n>>k;
    double sm=0;
    for (int i=0;i<k;i++) {
        double u;
        cin>>u;
        sm+=u;
    }
    cout<<fixed<<setprecision(4)<<((n-k)*-3.0+sm)/n<<' '<<((n-k)*3.0+sm)/n;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

