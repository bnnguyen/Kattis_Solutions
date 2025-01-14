#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define x first
#define y second
#define ii pair<int,int>
const ll N = 2e6+10;
int t;
int st[4*N],a[N];

void upd(int id, int l, int r, int i)
{
    if (i<l||i>r) return;
    if (l==r)
    {
        st[id]=a[i];
        return;
    }

    int mid=(l+r)/2;

    upd(id*2,l,mid,i);
    upd(id*2+1,mid+1,r,i);

    st[id]=st[id*2]+st[id*2+1];
}

int get(int id, int l, int r,int u,int v)
{
    if (l>v||r<u) return 0;
    if (u<=l&&r<=v) return st[id];
    int mid=(l+r)/2;
    return get(id*2,l,mid,u,v)+get(id*2+1,mid+1,r,u,v);
}

void solve()
{
    int n,k;
    cin>>n>>k;
    while (k--)
    {
        char c;
        cin>>c;
        if (c=='F')
        {
            int u;
            cin>>u;
            a[u]=(a[u]+1)%2;
            upd(1,1,n,u);
        } else
        {
            int u,v;
            cin>>u>>v;
            cout<<get(1,1,n,u,v)<<'\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
}
