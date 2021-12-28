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


bool compar(const pair<double, ll>p1, const pair<double, ll>p2)
{
    return p1.se < p2.se;

}

void solve()
{

    ll n, t, c, a;
    cin >> n >> t >> c;
    ll res = 0;
    ll s = 0;
    for (ll i = 0; i < n; i += 1) {
        cin >> a;
        if (a <= t) {s += 1; if (s >= c) res += 1;}
        else s = 0;
    }
    cout << res;





}
int main()
{
    freopen("p23.inp", "r" ,stdin);
    freopen("p23.out", "w", stdout);
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
