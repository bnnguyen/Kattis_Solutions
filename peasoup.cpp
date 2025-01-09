#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
//int t;
void solve()
{
    int n;
    cin>>n;
    cin.ignore();
    string ans="Anywhere is fine I guess";
    while (n--)
    {
        bool e=0,a=0;
        int u;
        cin>>u;
        cin.ignore();
        string rn;
        getline(cin,rn);
        while (u--)
        {
            string v;
            getline(cin,v);
            if (v=="pea soup") e=1;
            if (v=="pancakes") a=1;
        }
        if (e&&a&&ans=="Anywhere is fine I guess") ans=rn;
    }
    cout<<ans;
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
