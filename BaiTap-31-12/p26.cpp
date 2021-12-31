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

ll arr[4];
void solve()
{
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    str a;
    cin >> a;
    ll total = 0;
    for (ll i = 0; i < a.size(); i += 1) {
        total += arr[a[i] - '1'];
    }
    cout << total;
}



int main()
{
    freopen("p26.inp", "r" ,stdin);
    freopen("p26.out", "w", stdout);
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
