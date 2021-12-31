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
    ll n, a;
    while (cin >> n) {
    ll c1 = 0, c2 = 0;
    for (ll i = 0; i < n; i += 1)
    {
        cin >> a;
        if (a == 100) c1 += 1;
        else c2 += 1;
    }
    if (c1 % 2 == 0)
    {
        if (c2 % 2 == 0) cout << "YES" << "\n";
        else if (c1 >= 2) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    else cout << "NO" << "\n";
    }
}



int main()
{
    freopen("p30.inp", "r" ,stdin);
    freopen("p30.out", "w", stdout);
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
