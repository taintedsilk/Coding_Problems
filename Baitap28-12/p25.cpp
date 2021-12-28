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
#define pa(p1, p2) make_pair(p1, p2)

bool compar(const pair<double, ll>p1, const pair<double, ll>p2)
{
    return p1.se < p2.se;

}
void solve()
{
    vector< pair <ll, ll> >v;
    ll n, k, x, a;
    cin >> n >> k >> x;
    ll prev, c = 1;
    cin >> prev;
    for (ll i = 1; i < n; i += 1) {
        cin >> a;
        if (a == prev) c ++;
        else {v.push_back(pa(prev, c)); c = 1;}
        prev = a;
    }
    if (c) v.push_back(pa(a, c));
    ll res = 0;
    //for (ll i = 0; i < v.size(); i += 1) cout << v[i].fi << " " << v[i].se << "\n";
    for (ll i = 0; i < v.size(); i += 1) {
        if (v[i].fi == x && v[i].se >= 2) {
            ll temp = v[i].se;
            ll le = i - 1, ri = i + 1;
            while(le >= 0 && ri < v.size()) {
                if ((v[le].fi == v[ri].fi) && (v[le].se + v[ri].se >= 3)) {
                    temp += v[le].se + v[ri].se;
                }
                else break;
                le--; ri++;
            }
            res = max(temp, res);
        }
    }
    cout << res;





}
int main()
{
    freopen("p25.inp", "r" ,stdin);
    freopen("p25.out", "w", stdout);
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
