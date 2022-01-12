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

    ll a, b;
    while (cin >> a >> b) {
    if (min(a, b) % 2 == 0) cout << "CUOI" << "\n";
    else cout << "BOM" << "\n";}
}
int main()
{
    freopen("p48.inp", "r" ,stdin);
    freopen("p48.out", "w", stdout);
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
