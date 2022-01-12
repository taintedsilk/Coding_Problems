#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;
typedef double db;
#define it1 it->first
#define it2 it->second




void solve()
{
    ll n;
    cin >> n;
    ll first, a, prev;
    cin >> first;
    prev = first;
    ll found = -1;
    for (ll i = 1 ; i< n; i += 1)
    {
        cin >> a;
        if (a < prev)
        {

            if (found != -1)
            {
                cout << -1;
                return;
            }
            else found = i - 1;
        }

        prev = a;
    }
    if (first < prev) {
        if (found != -1) {
            cout << -1;
            return;
        }
        else found = n - 1;
    }
    if (found == -1) cout << 0;
    else {cout << n - 1 - found;}
}
int main()
{
    freopen("p50.inp", "r" ,stdin);
    freopen("p50.out", "w", stdout);
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
