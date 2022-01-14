#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;
typedef double db;
#define it1 it->first
#define it2 it->second

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

unordered_map< ll, vector < ll >, custom_hash>m;
ll arr[100000];
bool check[100000];

void dfs(ll a, ll *price) {
    if (check[a]) return;
    for (ll i = 0; i < m[a].size(); i += 1) {
        if (!check[m[a][i]]) {
            *price = min(*price, arr[m[a][i]]);
            dfs(a, price);
            arr[a - 1] = 0;
            check[m[a][i]] = 1;
        }

    }

}



void solve()
{


    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i += 1) cin >> arr[i];
    ll a, b;
    for (ll i = 0; i < m; i += 1) {
        cin >> a >> b;
        m[a].push_back(b);
        m[b].push_back(a);
    }
    ll res = 0;
    for (ll i = 1; i <= n; i += 1) {
        dfs(i, &arr[i - 1]);
        res += arr[i - 1];
    }
    cout << res;


}
int main()
{
    //freopen("INP.inp", "r" ,stdin);
    //freopen("OUT.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t = 1;
    cin >> t;
    for (int i = 0; i < t; i += 1)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
