#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;

#define it1 it->first
#define it2 it->second
#define fi first
#define se second
#define p(p1, p2) make_pair(p1, p2)

pair<ll, ll>p[200000];
void solve()
{
    ll n;
    map<ll, ll>m;
    cin >> n;
    for (ll i = 0; i < n; i += 1) {
        cin >> p[i].fi >> p[i].se;
        m[p[i].fi] += 1;
    }
    for (ll i = 0; i < n; i += 1) {
        cout << n - 1 + m[p[i].se] << " " << n - 1 - m[p[i].se] << "\n";
    }
}



int main()
{
    freopen("p29.inp", "r" ,stdin);
    freopen("p29.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //long long t;
    //cin >> t;
    for (int i = 0; i < 1; i += 1)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
