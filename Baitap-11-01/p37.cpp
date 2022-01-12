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




pair<ll, ll>p[30000];
void solve()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 0 ;i < n ; i += 1) {
        cin >> p[i].fi >> p[i].se;
    }
    sort(p, p + n);
    //for (ll i = 0; i < n; i += 1) {
    //    cout << p[i].fi << " " << p[i].se << "\n";
    //}

    ll day = p[0].first;
    ll res = 0;
    ll today = k;
    ll i = 0;
    while (i < n) {
        if (day < p[i].fi) {day = p[i].fi; today = k;}
        if (day <= (p[i].fi + 1)) {
            while (day <= (p[i].fi + 1)) {
                if (today <= p[i].se) {
                    res += today;
                    p[i].se -= today;
                    day += 1;
                    today = k;
                }
                else {
                    today -= p[i].se;
                    res += p[i].se;
                    break;
                }
                //cout << res << " ";
            }
        }
        i += 1;
    }
    cout << res;

}



int main()
{
    freopen("p37.inp", "r" ,stdin);
    freopen("p37.out", "w", stdout);
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
