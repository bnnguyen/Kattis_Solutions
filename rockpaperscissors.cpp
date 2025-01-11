#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e6+10;
//int t;
int n;
map<string,int> m;
double w[N],l[N];

int cmp(string x, string y)
{
    int a=m[x], b=m[y];
    if (a-b==1 || (a==1&&b==3)) return 0;
    else if (a==b) return 2;
    else return 1;
}

void solve()
{
    int k;
    cin>>k;
    for (int i=1;i<=n;i++) w[i]=l[i]=0;
    for (int i=0;i<k*n*(n-1)/2;i++)
    {
        int p1,p2;
        string m1,m2;
        cin>>p1>>m1>>p2>>m2;
        if (cmp(m1,m2)==0) w[p1]+=1,l[p2]+=1;
        else if (cmp(m1,m2)==1) w[p2]+=1,l[p1]+=1;
    }
    for (int i=1;i<=n;i++)
    {
        if (w[i]==0&&l[i]==0) cout<<"-\n";
        else cout<<setprecision(3)<<fixed<<w[i]/(w[i]+l[i])<<"\n";
    }
    cout<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cin>>t;
    cin>>n;
    m.insert({"rock",1});
    m.insert({"paper",2});
    m.insert({"scissors",3});
    while (n!=0)
    {
        solve();
        cin>>n;
    }
    return 0;
}

