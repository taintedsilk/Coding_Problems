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
    ll n, m;
    cin >> n >> m;
    str arr[100];
    for (ll i = 0 ; i < n; i += 1)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i <  n; i += 1)
    {
        for (ll j = 0; j < m; j += 1)
        {
            if (arr[i][j] == '.')
            {
                if (i % 2 == 0)
                {
                    if (j % 2 == 0) arr[i][j] = 'B';
                    else arr[i][j] = 'W';
                }

                else
                {
                    if (j % 2 == 0) arr[i][j] = 'W';
                    else arr[i][j] = 'B';
                }
            }
        }

    }
    for (ll i = 0 ; i < n;i += 1) {
        cout << arr[i] << "\n";
    }
}


int main()
{
    freopen("p40.inp", "r" ,stdin);
    freopen("p40.out", "w", stdout);
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
