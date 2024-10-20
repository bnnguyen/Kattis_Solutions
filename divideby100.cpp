#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e3+10;
int t;
string n,m,ans="";
void solve()
{
    cin>>n>>m;
    reverse(n.begin(),n.end());
    reverse(m.begin(),m.end());
    while (m.size()<n.size()) m.push_back('0');
    while (n.size()<m.size()) n.push_back('0');
    bool fl=0;
    for (int i=0;i<n.size();i++)
    {
        if (m[i]=='1') ans.push_back('.');
        if (n[i]!='0'||m[i]!='0') fl=1;
        if (fl) ans.push_back(n[i]);
        //cout<<ans<<' '<<n[i]<<' '<<m[i]<<' '<<fl<<'\n';
    }
    reverse(ans.begin(),ans.end());
    if (ans[ans.size()-1]=='.') ans.pop_back();
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
}

