#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
//int t;
void solve()
{
    int x,y,n;
    cin>>x>>y>>n;
    for (int i=1;i<=n;i++)
    if (i%x!=0&&i%y!=0) cout<<i<<'\n';
    else
    {
        if (i%x==0) cout<<"Fizz";
        if (i%y==0) cout<<"Buzz";
        cout<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

