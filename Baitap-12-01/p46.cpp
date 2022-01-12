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

    ll n, a, k;
    cin >> n >> k;
    ll m = LLONG_MIN, res;
    for (ll i = 0; i < n; i += 1) {
        cin >> a;
        if (ceil((double)a / k) >= m) {
            res = i;
            m = ceil((double)a / k);
        }
    }
    cout << res + 1;
}
int main()
{
    freopen("p46.inp", "r" ,stdin);
    freopen("p46.out", "w", stdout);
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
