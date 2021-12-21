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


ll n, a;
ll cash[100];
void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0 ; i < n; i += 1) {
        cin >> cash[i];
    }
    ll res = LLONG_MAX;
    for (ll i = 0; i < n; i += 1) {
        ll total = cash[i] * 15;
        for (ll j = 0; j < cash[i]; j += 1) {
            cin >> a;
            total += a * 5;

        }
        res = min(res, total);
    }
    cout << res;
}
int main()
{
    freopen("p10.inp", "r" ,stdin);
    freopen("p10.out", "w", stdout);
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
