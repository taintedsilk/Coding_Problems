#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;

#define it1 it->first
#define it2 it->second


bol arr[300] = {0};
void solve()
{
    ll n, p;
    cin >> p >> n;
    ll a;
    for (ll i = 0 ; i < n; i += 1) {
        cin >> a;
        if (arr[a % p]) {cout << i + 1; cin.ignore(); return;}
        else arr[a % p] = true;
    }
    cout << -1;

}
int main()
{
    freopen("p42.inp", "r" ,stdin);
    freopen("p42.out", "w", stdout);
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
