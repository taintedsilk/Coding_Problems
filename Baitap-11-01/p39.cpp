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
    str a;
    cin >> a;
    ll n;
    cin >> n;
    if (n >= a.size()) {
        cout << n + a.size() - ((n + a.size()) % 2);
    }
    else {
        ll res = LLONG_MIN;
        ll first;
        ll m = (n + a.size()) / 2;
        for (ll i = 0; i < a.size(); i += 1) {
            for (ll j = m; j >= 1; j -= 1) {
                if ((i + j * 2) <= n + a.size() && i + j < a.size()) {
                    str first;
                    if (i + j * 2 < a.size()) first = a.substr(i + j, j);
                    else first = a.substr(i + j);
                    if (a.substr(i, first.size()) == first) {
                        res = max(res, j);
                    }
                }
            }
        }
        cout << max(res * 2, min((ll)a.size(), n) * 2);
    }

}



int main()
{
    freopen("p39.inp", "r" ,stdin);
    freopen("p39.out", "w", stdout);
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    long long t = 1;
    //cin >> t;
    for (int i = 0; i < t; i += 1)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
