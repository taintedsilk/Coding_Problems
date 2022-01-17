#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;

#define it1 it->first
#define it2 it->second

//unordered_map<ll, ll, custom_hash>m;


bool found[51] = {0};
map< ll,vector <ll> >::iterator it;
map< ll,vector <ll> >m;
ll dfs(ll a) {
    if (found[a]) return 0;
    ll res = 1;
    found[a] = 1;
    for (ll i = 0; i < m[a].size(); i += 1) {
        ll ele = m[a][i];
        if (!found[ele]) res += dfs(ele);
    }
    return res;


}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a, b;


    for (ll i = 0; i < k; i += 1) {
        cin >> a >> b;
        m[a].push_back(b);
        m[b].push_back(a);
    }
    ll res = 1;
    for (it = m.begin(); it != m.end(); it++) {
        if (!found[it1]) res *= (ll) pow(2, (dfs(it1) - 1));
    }
    cout << res;


}
int main()
{
    freopen("p41.inp", "r" ,stdin);
    freopen("p41.out", "w", stdout);
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    long long t = 1;
    //cin >> t;
    for (int i = 0; i < t; i += 1)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
