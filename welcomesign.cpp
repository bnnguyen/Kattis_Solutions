#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double
#define ll long long
#define ld long double
#define fi first
#define se second
#define ii pair<int, int>
#define bit(mask,i) ((mask >> i) & 1)

int r, c;
const int Sz = 52;

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> r >> c;
    int cnt=1;
    for(int i = 1; i <= r; i++)
    {
        string s;
        cin>>s;
        int k=c-s.size();
        if (k % 2==0)
        {
            for (int i=1;i<=k/2;i++) cout<<'.';
            cout<<s;
            for (int i=1;i<=k/2;i++) cout<<'.';
        } else {
        if (cnt%2==1)
        {
            for (int i=1;i<=k/2;i++) cout<<'.';
            cout<<s;
            for (int i=1;i<=k/2+1;i++) cout<<'.';
        } else
        {
            for (int i=1;i<=k/2+1;i++) cout<<'.';
            cout<<s;
            for (int i=1;i<=k/2;i++) cout<<'.';
        }
        cnt++;
        }
        cout<<'\n';
    }
}
