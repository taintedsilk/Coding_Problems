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




void solve()
{
    ll n;
    str a;
    cin >> n >> a;
    ll sit = 0, stand = 0;
    for (ll i = 0; i < n; i += 1) {
        if (a[i] == 'X') stand += 1;
        else sit += 1;
    }
    ll res = abs(stand - n / 2);
    cout << res << "\n";
    ll c = 0;
    if (stand == sit) cout << a;
    else if (stand > sit) {
    for (ll i = 0; i < n; i += 1) {
        if (a[i] == 'X') {
            c += 1;
            a[i] = 'x';
            if (c == res) break;
        }
    }
    cout << a;
    }
    else {
        for (ll i = 0; i < n; i += 1) {
        if (a[i] == 'x') {
            c += 1;
            a[i] = 'X';
            if (c == res) break;
        }
    }
    cout << a;

    }

 }
int main()
{
    freopen("p18.inp", "r" ,stdin);
    freopen("p18.out", "w", stdout);
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
