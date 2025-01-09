#include <bits/stdc++.h>
#define ll long long
#define int ll
#define ii pair<ll,ll>

using namespace std;
const int N = 1e6+10;

bool cp2(int x)
{
    while (x%2==0) x/=2;
    return x==1;
}

void solve()
{
    string s;
    cin>>s;
    if (s[s.size()-1]!='O')
    {
        cout<<"INVALID";
        return;
    }
    int cn=2;
    for (int i=2;i<=47;i++)
    {
        cn*=2;
        int ans=(cn-1)/3;
        if (cp2(ans)||ans%2==0) continue;
        for (int i=s.size()-2;i>=0;i--)
        {
            if(s[i]!='E'&&s[i]!='O')
            {
                cout<<"INVALID";
                return;
            }
            if (s[i]=='O'&&s[i+1]=='O')
            {
                cout<<"INVALID";
                return;
            }
            if(s[i]=='E') ans*=2;
            else if ((ans-1)%3!=0) break;
            else if ((ans-1)/3%2==0) break;
            else ans=(ans-1)/3;
            if (cp2(ans)) break;
            if (i==0)
            {
                cout<<ans;
                return;
            }
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

