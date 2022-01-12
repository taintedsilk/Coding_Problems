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
    ll n, k;
    cin >> n >> k;
    vector<ll>v;
    ll m, a;
    for (ll i = 0 ;i <  n; i+= 1) {
        cin >> m;
        bool found = false;
        for (ll j = 0; j < m; j += 1) {
            cin >> a;
            if (a < k) found = true;
        }
        if (found) {
            v.push_back(i + 1);
        }
    }
    cout << v.size() << "\n";
    for (ll i = 0; i < v.size(); i += 1) {
        cout << v[i] << " ";
    }
}



int main()
{
    freopen("p36.inp", "r" ,stdin);
    freopen("p36.out", "w", stdout);
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
