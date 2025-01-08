#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
int t;
void solve()
{
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    ll cs=0,ans=0;
    for (char c:s)
    {
        if ('0'<=c&&c<='9') cs=cs*10+(int)(c-'0');
        else ans=max(ans,cs),cs=0;
    }
    cout<<max(ans,cs);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

