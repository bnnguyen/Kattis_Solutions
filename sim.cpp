#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 20;
int t;
void solve()
{
    string s;
    list<char> ans;
    getline(cin,s);
    auto it=ans.begin();
    for (char c:s)
    {
        if (c=='<')
        {
            if (it!=ans.begin())
            {
                it=ans.erase(--it);
            }
        }
        else if (c=='[') it=ans.begin();
        else if (c==']') it=ans.end();
        else
        {
            it=ans.insert(it,c);
            it++;
        }
    }
    for (char c:ans)
        cout<<c;
    cout<<'\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}
