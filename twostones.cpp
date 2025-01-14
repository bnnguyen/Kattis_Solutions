#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
//bool p[1010];
int n;
void solve()
{
    cin>>n;
    if (n%2==0) cout<<"Bob";
    else cout<<"Alice";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
