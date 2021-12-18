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
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
//unordered_map<ll, ll, custom_hash>m;


ll n, k, d;
ll cache[100][2];
ll find_max(ll n, bool found = false)
{
    if (n == d && !found) return 1;
    if (n < d && !found) return 0;
    ll total = 0;
    if (found)
    {
        for (ll i = 1; i <= min(k, n); i += 1)
        {
            if (!cache[n - i][found]) total += find_max(n - i, true);
            else total += cache[n - i][found];

        }
    }
    else
    {
        for (ll i = 1; i <= min(k, n); i += 1)
        {
            if (i < d)
            {
                if (!cache[n - i][0]) total += find_max(n - i);
                else total += cache[n - i][0];
            }
            else
            {
                if (!cache[n - i][1])total += find_max(n - i, true);
                else total += cache[n - i][1];
            }
        }

    }

    return cache[n][found] = total;

}
void solve()
{
    cin >> n >> k >> d;
    ll total = 0;
    cout << find_max(n);

}
int main()
{
    //freopen("INP.txt", "r" ,stdin);
    //freopen("OUT.txt", "w", stdout);
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
