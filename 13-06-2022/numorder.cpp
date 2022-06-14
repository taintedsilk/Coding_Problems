#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>

//using namespace __gnu_pbds;
//using namespace std;

typedef long long ll;
typedef bool bl;
typedef std::string str;
typedef unsigned long long ull;
typedef double db;
//typedef unordered_map<ll, ll> ullmap;

#define it1 it->first
#define it2 it->second
#define f(i, n) for (ll i = 0; i < n; i += 1)
#define fu(i, start, end) for(ll i = start; i < end; i += 1)
#define fd(i, start, end) for(ll i = start; i >= end; i-=1)
#define p(p1, p2) make_pair(p1, p2)
#define fi first
#define se second
#define MOD 1000000007


ll n, m, k;

ll amount_less_than_k(int mid)
{

    ll total = 0;
    if (n <= m)
    {
        f(i, n)
        {
            ll temp = mid - (i + 1) * (i + 1);
            if (temp < 0) break;
            else
            {
                total += std::min((ll)sqrt(temp), m);

            }

        }
    }

    else
    {
        f(i, m)
        {
            ll temp = mid - (i + 1) * (i + 1);
            if (temp < 0) break;
            else
            {
                total += std::min((ll)sqrt(temp), n);

            }

        }


    }
    return total;
}
void solve()
{

    std::cin >> n >> m;
    std::cin >> k;

    ll lo = 0, hi = n * n + m * m;

    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (amount_less_than_k(mid) < k)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    ll ans = lo;
    std::cout << ans;



}


int main()
{
    freopen("numorder.inp", "r" ,stdin); freopen("numorder.out", "w", stdout);
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    long long t = 1;

    //cin >> t;
    for (int i = 0; i < t; i += 1)
    {
        solve();
        std::cout << "\n";
    }
    return 0;
}
