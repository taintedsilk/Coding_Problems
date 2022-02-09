#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bl;
typedef string str;
typedef unsigned long long ull;
typedef double db;

#define it1 it->first
#define it2 it->second
#define f(i, n) for (ll i = 0; i < n; i += 1)
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



void solve()
{
    ll n;
    cin >> n;
    str v(n, '0');
    cout << v << "\n";
    ll time = pow(2, n);
    f(i, time - 1) {
        ll ind = v.size() - 1;
        if (v[ind] == '0') v[ind] += 1;
        else {
            while (v[ind] == '1') {
                v[ind] = '0';
                ind -= 1;
            }
            v[ind] += 1;
        }
        cout << v;
        cout << "\n";
    }



}
int main()
{
    //freopen("INP.inp", "r" ,stdin);
    //freopen("OUT.out", "w", stdout);
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
