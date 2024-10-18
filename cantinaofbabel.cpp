#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define x first
#define y second
const ll N = 5e5+10;
map<string, pair<int, vector<string>>> ml;
map<string,int> num,low;
map<string,bool> deleted;
stack<string> st;
ll timeDfs=0,best=0;

void dfs(string u) {
    num[u] = low[u] = ++timeDfs;
    st.push(u);
    for (string v : ml[u].y) {
      if (deleted[v]) continue;
        if (!num[v]){
            dfs(v);
            low[u] = min(low[u], low[v]);
        }
        else low[u] = min(low[u], num[v]);
    }
    if (low[u] == num[u]) {
        int cnt=0;
        string v;
        do {
            v = st.top();
            cnt+=ml[v].x;
            st.pop();
            deleted[v] = true;
        }
        while (v != u);
        best=max(best,cnt);
    }
}

void solve()
{
    int n;
    cin>>n;
    ml.clear();
    for (int i=0;i<n;i++)
    {
        string lang;
        cin>>lang;
        cin>>lang;
        ml[lang].x++;
        while (cin.peek()!='\n')\
        {
            string u;
            cin>>u;
            ml[lang].y.push_back(u);
        }
    }
    for (auto it=ml.begin(); it!=ml.end(); it++)
        if (!num[it->first]) dfs(it->first);

    cout<<n-best;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
