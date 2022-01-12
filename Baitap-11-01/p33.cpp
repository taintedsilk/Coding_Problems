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
    str a;
    ll k;
    cin >> a >> k;
    for (ll i = 0; i < k; i += 1) {
        for (ll j = 1; j < a.size(); j += 1) {
            if (a[j] > a[j - 1]) {
                swap(a[j], a[j - 1]);
                break;
            }
        }
    }
    cout << a;


}



int main()
{
    freopen("p33.inp", "r" ,stdin);
    freopen("p33.out", "w", stdout);
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
