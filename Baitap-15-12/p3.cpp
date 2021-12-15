#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;

ull n, k, a ;
void solve() {
    cin >> n >> k;
    ll total = 0;
    for (ll i = 0 ; i < n; i += 1) {
        cin >> a;
        total += a;
    }
    total = abs(total);
    cout << ceil((double)total / k);}
int main()
{
    freopen("p3.inp", "r" ,stdin);
    freopen("p3.out", "w", stdout);
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
