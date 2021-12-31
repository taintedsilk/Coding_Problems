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

ll arr[6][6];
void solve()
{
    for (ll i = 1; i <= 5; i += 1)
    {
        for (ll j = 1; j <= 5; j += 1)
        {
            cin >> arr[i][j];
        }
    }

    ll m = LLONG_MIN;

    ll perm[] = {1, 2, 3, 4, 5};
    #define t1 perm[0]
    #define t2 perm[1]
    #define t3 perm[2]
    #define t4 perm[3]
    #define t5 perm[4]
    do {
        m = max(m, arr[t1][t2] + arr[t2][t1] + arr[t2][t3] + arr[t3][t2] +
                                                    2 * (arr[t3][t4] + arr[t4][t3] + arr[t4][t5] + arr[t5][t4]));
    }
    while (next_permutation(perm, perm + 5));
    cout << m;
}



int main()
{
    freopen("p27.inp", "r" ,stdin);
    freopen("p27.out", "w", stdout);
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
