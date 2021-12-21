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
    str a, b;
    cin >> a >> b;
    map<char, ll>m, m1;
    map<char, ll>::iterator it;
    for (ll i = 0; i < a.size() ; i += 1) {
        m[a[i]] += 1;
    }
    for (ll i = 0; i < b.size(); i += 1) {
        m1[b[i]] += 1;
    }
    ll res = 0;
    for (it = m1.begin(); it != m1.end(); it++) {
        if (m[it->first]) {
            res += min(m[it->first], it->second);
        }
        else {
            cout << -1;
            return;
        }
    }
    cout << res;
 }
int main()
{
    freopen("p11.inp", "r" ,stdin);
    freopen("p11.out", "w", stdout);
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
