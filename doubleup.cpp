#include <bits/stdc++.h>
#define ll long long
#define int ll
#define ii pair<ll,ll>

using namespace std;
string to_String(int n){
    stringstream ss;
    ss << n;
    return ss.str();
}

string Multi(string a, int b){
    string res = "";
    char val;
    int du = 0;
    for(int i = (int)a.size() - 1; i >= 0; i--){
        val = (a[i] - '0') * b + du;
        res += char(val % 10 + '0');
        du = val / 10;
    }
    if(du){
        string vcl = to_String(du);
        reverse(vcl.begin(), vcl.end());
        res += vcl;
    }
    reverse(res.begin(), res.end());
    return res;
}

string Divide(string a, int b){
    string res = "";
    char val;
    int du = 0;
    for(int i = 0; i < (int)a.size(); i++){
        val = du * 10 + (a[i] - '0');
        res += char(val / b + '0');
        du = val % b;
    }
    while(res[0] == '0' && res.size() > 1) res.erase(0, 1);
    return res;
}

string Pow(int n){
    string res = "1";
    for(int i = 1; i <= n; i++) res = Multi(res, 2);
    return res;
}

int Log2(string s){
    int res = 0;
    while(s != "1"){
        s = Divide(s, 2);
        res++;
    }
    return res;
}
const int N = 1e3+10;
int n,dp[N][N],a[N];

void solve()
{
    cin>>n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++) dp[i][j]=-1;
    for (int i=1;i<=n;i++)
    {
        string u;
        cin>>u;
        a[i]=Log2(u);
        dp[i][i]=a[i];
        //cout<<a[i]<<' ';
    }
    for (int d=1;d<n;d++)
        for (int i=1;i<=n-d;i++)
    {
        int j=i+d;
        dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
        int l=i,r=j;
        while (l<r)
        {
            int mid=(l+r)/2;
            //cout<<l<<' '<<r<<' '<<mid<<'\n';
            if (dp[i][mid]==dp[mid+1][r])
            {
                l=r=mid;
                break;
            }
            else if (dp[i][mid]<dp[mid+1][r]) l=mid+1;
            else r=mid;
        }
        if (dp[i][l]==dp[l+1][j]) dp[i][j]=max(dp[i][j],dp[i][l]+1);
        //cout<<i<<' '<<j<<' '<<dp[i][j]<<' '<<l<<'\n';
    }
    cout<<Pow(dp[1][n]);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
