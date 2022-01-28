#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bl;
typedef string str;
typedef unsigned long long ull;
typedef double db;

#define it1 it->first
#define it2 it->second
#define fi first
#define se second
#define p(p1, p2) make_pair(p1, p2)
#define f(i, n) for (ll i = 0; i < n; i += 1)


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
//unordered_set<double, custom_hash>s;
#define MOD 1000000007
ll arr[1000][2];
ll n, w;
ll res = 0;
void dp(ll loc,ll val,ll cost) {
    if (loc == n) {
        res = max(res, val);
        return;
    }
    if (cost + arr[loc][0] <= w) {
        dp(loc + 1, val + arr[loc][1], cost + arr[loc][0]);
    }
    dp(loc + 1, val, cost);
}
void solve()
{

    cin >> n >> w;
    f(i, n) {
        cin >> arr[i][0] >> arr[i][1];
    }
    dp(0, 0, 0);
    cout << res;


}
int main()
{

    //freopen("INP.txt", "r" ,stdin);
    //freopen("OUT.txt", "w", stdout);
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
