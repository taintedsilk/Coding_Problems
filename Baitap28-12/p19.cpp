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


bool compar(const pair<double, ll>p1, const pair<double, ll>p2) {
    return p1.se < p2.se;

}

void solve()
{
    pair<double, ll>p1[10000];
    ll n, s;
    cin >> n >> s;
    for (ll i =0 ; i < n; i += 1) {
    ll x, y;
    cin >> x >> y >> p1[i].second;
    p1[i].first = (double)sqrt(x * x + y * y);
    }
    sort(p1, p1 + n);
    ll total = 0;
    bool found = false;
    for (ll i =0 ;i < n; i += 1) {
        total += p1[i].se;
        if (total + s >= 1000000) {
            cout << fixed << setprecision(7) << p1[i].fi;
            found = true;
            break;
        }
    }
    if (!found) cout << -1;





 }
int main()
{
    freopen("p19.inp", "r" ,stdin);
    freopen("p19.out", "w", stdout);
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
