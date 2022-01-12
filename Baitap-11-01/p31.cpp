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




ll arr[100000];
void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i += 1) cin >> arr[i];
    vector<ll>v, v1;
    ll total = 0;
    for (ll i = 0; i < n; i += 1) {
        v.push_back(total);
        total += arr[i];
    }
    v.push_back(total);
    sort(arr ,arr + n);
    total = 0;
    for (ll i = 0; i < n; i+= 1) {
        v1.push_back(total);
        total += arr[i];
    }
    v1.push_back(total);
    ll q;
    cin >> q;
    ll a, b, c;
    for (ll i = 0; i < q;i += 1) {
        cin >> a >> b >> c;
        if (a == 1) {
            cout << v[c]  - v[b - 1] << "\n";
        }
        else {
            cout << v1[c] - v1[b - 1] << "\n";
        }

    }



}



int main()
{
    freopen("p31.inp", "r" ,stdin);
    freopen("p31.out", "w", stdout);
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
