#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
//int t;
vector<ll> ans;
void solve()
{
    ll n;
    cin>>n;
    for (ll i=1;i<=sqrt(n);i++)
        if (n%i==0)
        {
            ans.push_back(i-1);
            if (n/i!=i) ans.push_back(n/i-1);
        }
    sort(ans.begin(),ans.end());
    for (ll i:ans) cout<<i<<' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
