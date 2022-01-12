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
    ll n, d;
    cin >> n >> d;
    ll time = 0;
    ll res = 0, a;
    for (ll i = 0; i < n; i += 1) {
        cin >> a;
        time += a;
    }
    if (time + (n - 1) * 10 > d) cout << -1;
    else {
    cout << (d - time) / 5;
 
 
    }
}
 
 
 
int main()
{
    freopen("p34.inp", "r" ,stdin);
    freopen("p34.out", "w", stdout);
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
