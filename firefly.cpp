#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 20;
int t;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> suml(m,0);
    vector<int> sumr(m,0);
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if(i % 2 == 0) {
            sumr[t-1]++;
        }
        else {
            suml[m-t]++;
        }
    }
    int sum = 0;
    for(int i = m-1; i >= 0; i--) {
        sum += sumr[i];
        sumr[i] = sum;
    }
    sum = 0;
    for(int i = 0; i < m; i++) {
        sum += suml[i];
        suml[i] = sum;
    }
    int best = 600000;
    int cnt = 0;
    for(int i = 0; i < m; i++) {
        if(suml[i] + sumr[i] < best) {
            best = suml[i] + sumr[i];
            cnt = 0;
        }
        if(suml[i] + sumr[i] == best) {
            cnt++;
        }
    }
    cout <<best<<" "<<cnt<<'\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    cin>>t;
//    cin.ignore();
//    while (t--)
//    {
//        solve();
//    }
    solve();
    return 0;
}
