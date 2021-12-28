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



void solve()
{
    ll n, a;
    cin >> n;
    ll total = 0, p = 0;
    for (ll i = 0; i < n; i += 1) {
        cin >> a;
        if (a > 0) p += a;
        else {
            if (p) p -= 1;
            else total += 1;
        }
    }
    cout << total;









}
int main()
{
    freopen("p22.inp", "r" ,stdin);
    freopen("p22.out", "w", stdout);
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
