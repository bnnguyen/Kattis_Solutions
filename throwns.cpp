#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 110;
int n,k;
void solve()
{
    int ans=0;
    cin>>n>>k;
    vector<int> a;
    a.push_back(0);
    while (k--)
    {
        string u;
        int v;
        cin>>u;
        //cout<<u<<' ';
        if (u=="undo")
        {
            cin>>u;
            v=stoi(u);
            while (v--)
            {
                ans-=a[a.size()-1];
                a.pop_back();
            }
            continue;
        }
        else
        {
            v=stoi(u);
            a.push_back(v);
            ans+=v;
        }
    }
    if (ans>0) cout<<ans%n;
    else cout<<(n-(-ans)%n)%n;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
