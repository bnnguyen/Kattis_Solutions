#include <bits/stdc++.h>
#define ll long long
#define int ll
#define ii pair<ll,ll>

using namespace std;
int n,m;
unordered_map<int,int> h;

void solve()
{
    string s;
    cin >> s;
    vector<vector<int>> freq(9, vector<int>(9, 0));
    for (int i = 1; i < s.size(); ++i) {
        int u = s[i-1]-'1';
        int v = s[i]-'1';
        ++freq[u][v];
    }

    string keys="123456789";
    int res=LLONG_MAX;
    do{
        vector<int> pos(9);
        for (int i = 0; i < 9; ++i) {
          pos[keys[i]-'1']=i;
        }
        int r=abs(pos[s[0]-'1']-pos[keys[0]-'1'])+1;
        for (int i = 0; i < 9; ++i)
            for (int j = 0; j < 9; ++j)
                r+=(abs(pos[i]-pos[j])+1)*freq[i][j];
        res=min(res, r);
    } while(next_permutation(keys.begin(),keys.end()));
    cout<<res<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

