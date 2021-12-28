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
    ll n, s, a;
    while (cin >> n && cin >> s)
    {
        ll total = 0, m = LLONG_MIN;
        for (ll i =0 ; i < n; i += 1)
        {
            cin >> a;
            total += a;
            m = max(m, a);
        }
        if (total - m<= s) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }





}
int main()
{
    freopen("p20.inp", "r" ,stdin);
    freopen("p20.out", "w", stdout);
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
