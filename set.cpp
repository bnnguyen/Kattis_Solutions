#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
//int t;
string s[20];

bool ck(string a, string b, string c)
{
    for (int i=0;i<4;i++)
    {
        if (!((a[i]==b[i]&&b[i]==c[i])||(a[i]!=b[i]&&b[i]!=c[i]&&a[i]!=c[i]))) return 0;
    }
    return 1;
}

void solve()
{
    bool f=0;
    for (int i=0;i<4;i++)
        for (int j=1;j<=3;j++)
    {
        cin>>s[3*i+j];
    }
    //for (int i=1;i<=12;i++) cout<<s[i]<<'\n';
    for (int i=1;i<=12;i++)
        for (int j=i+1;j<=12;j++)
            for(int k=j+1;k<=12;k++)
            {
                if (ck(s[i],s[j],s[k])) cout<<i<<' '<<j<<' '<<k<<'\n',f=1;
            }
    if (!f) cout<<"no sets";
    //cout<<ck(s[1],s[8],s[11]);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cin>>t;
//    while (n!=0)
//    {
//        solve();
//        cin>>n;
//    }
    solve();
    return 0;
}

