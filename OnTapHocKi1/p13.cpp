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

    ll n, a , b, c;
    cin >> n >> a >> b;
    for (ll i = 0; i < n; i += 1) {
        cin  >> c;
        cout << (((c * a) % b ) / a) << " ";
    }



 }
int main()
{
    freopen("p13.inp", "r" ,stdin);
    freopen("p13.out", "w", stdout);
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
