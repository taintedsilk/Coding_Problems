#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;

void solve()
{
    ll n, price[20];
    cin >> n;
    for (ll i = 0; i < n; i += 1)
    {
        cin >> price[i];
    }
    ll menu;
    cin >> menu;
    ll f1, f2, f3, f4, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    cin >> f1 >> f2 >> f3 >> f4;
    cin >> n;
    ll res = 0, special = 0;
    ll a;
    for (ll i = 0; i< n; i += 1)
    {
        cin >> a;
        if (a == f1) t1 += 1;

        else if (a == f2) t2 += 1;
        else if (a == f3) t3 += 1;
        else if (a == f4) t4 += 1;

        else res += price[a - 1];

    }
    int m = max(max(t1, t2), max(t3, t4) );
    for (int i = 1; i <= m; i += 1)
    {
        int p = 0;
        if (t1 >= i) p += price[f1 - 1];
        if (t2 >= i) p += price[f2 - 1];
        if (t3 >= i) p += price[f3 - 1];
        if (t4 >= i) p += price[f4 - 1];
        if (p > menu) res += menu;
        else res += p;
    }
    cout << res;

}
int main()
{
    freopen("INP.txt", "r" ,stdin);
    freopen("OUT.txt", "w", stdout);
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
