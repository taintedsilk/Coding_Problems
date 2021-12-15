#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;
set<ll>s;
ull n, m, a;
str arr[1000];
void solve() {
    cin >> n >> m;
    for (ll i = 0; i < n; i += 1) cin >> arr[i];
    for (ll i = 0; i < n; i += 1) {
        ll idx = arr[i].find('G');
        ll idx1 = arr[i].find('S');
        if (idx > idx1) {cout << - 1; return;}
        s.insert(idx1 - idx);
    }
    cout << s.size();
}
int main()
{
    freopen("p2.inp", "r" ,stdin);
    freopen("p2.out", "w", stdout);
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
