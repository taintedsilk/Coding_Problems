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
    ll n, k, a;
    cin >> n >> k;
    map<ll, ll>m;
    map<ll, ll>::iterator it;
    vector<ll>v(n + 1);
    for (ll i = 0; i < n; i += 1) {cin >> a; m[a] = i;}
    bool zero = false;
    for (it = m.begin(); it != m.end(); it ++) {
        if (zero) {
            zero = false;
            v[it2] = 0;
        }
        else {
            zero = true;
            v[it2] = 1;
        }
    }
    cin.ignore();
    for (ll i = 0; i < n; i += 1) {
        cout << v[i] << " ";
    }
}





    //for (ll i = 0; i < v2.size(); i += 1) {
    //    cout << v2[i] << " ";
    // }


int main()
{

    //freopen("INP.txt", "r" ,stdin);
    //freopen("OUT.txt", "w", stdout);
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
