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
bool power2(ull x)
{
    return (x != 0) && ((x & (x - 1)) == 0);
}
void solve()
{
    ll n, m;
    str arr[100];
    cin >> n >> m;
    for (ll i = 0; i < n; i += 1) {
        str a, b;
        cin >> a;
        for (ll j = 1; j < m; j += 1) {
            cin >> b;
            a += b;
        }
        arr[i] = a;
    }
    vector<ll>res;
    for (ll i = 1; i < n; i += 1) {
        vector <str>v;
        if (n % i == 0 && (power2(n / i))) {
        for (ll j = 0; j < i; j += 1) {
            v.push_back(arr[j]);
        }
        bool found = true;
        for (ll j = i; j < i * 2; j += 1) {
            if (arr[j] != v[i - 1 - j % i]) {found = false; break;}
        }
        if (found) {res.push_back(i);}}
    }
    ll r = n;
    if (r % 2 == 0) {
    for (ll i = res.size() - 1; i >= 0; i -= 1) {
        if (res[i] == r / 2) r = res[i];
    }}
    cout << r;









}
int main()
{
    freopen("p21.inp", "r" ,stdin);
    freopen("p21.out", "w", stdout);
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
