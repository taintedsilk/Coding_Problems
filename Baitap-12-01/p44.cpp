#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;
typedef double db;
#define it1 it->first
#define it2 it->second



void solve()
{
    ll a, b, c;
    while (cin >> a >> b >> c)
    {
        ll res = 0;
        res += ceil((db)(a + b + c) / 5);
        cin >> a >> b >> c;
        res += ceil((db)(a + b + c) / 10);
        ll n;
        cin >> n;
        if (res <= n) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}
int main()
{
    freopen("p44.inp", "r" ,stdin);
    freopen("p44.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t = 1;
    //cin >> t;
    for (int i = 0; i < t; i += 1)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
