#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
//int t;

void solve()
{
    string s;
    cin>>s;
    bool f=0;
    for (char c:s)
    {
        if (c=='a') f=1;
        if (f) cout<<c;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    cin>>t;
//    cin.ignore();
//    while (t--)
//    {
//        solve();
//    }
    solve();
    return 0;
}
