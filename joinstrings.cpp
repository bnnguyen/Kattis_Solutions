#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
//int t;
string s[N];
bool p[N];
int l[N],g[N];

void solve()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>s[i],l[i]=i;
    int u=1;
    for (int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        //cout<<a<<' '<<b<<' '<<l[a]<<' '<<l[b]<<'\n';
        p[b]=1;
        while (p[u]) u++;
        g[l[a]]=b;
        l[a]=l[b];
        //cout<<g[a]<<' '<<g[b]<<' '<<l[a]<<' '<<g[l[a]]<<'\n';
    }
    //for (int i=1;i<=n;i++) cout<<g[i]<<' '<<l[i]<<' '<<s[i]<<'\n';
    do
    {
        cout<<s[u];
        u=g[u];
    } while (u!=0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

