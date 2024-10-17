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
    int n,m,k;
    cin>>k>>m>>n;
    if (k%(n+m)<m) cout<<"Barb";
    else cout<<"Alex";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
}
