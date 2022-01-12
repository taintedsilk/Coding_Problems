#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;
typedef double db;
#define it1 it->first
#define it2 it->second


void check(str a, str b)
{
    if (a.find(b) != string::npos)
    {
        cout << 1 << "\n";
        return;
    }
    map<char, ll>m;
    for (ll i = 0; i < a.size(); i += 1) m[a[i]] += 1;
    for (ll i = 0; i < b.size(); i += 1)
    {
        m[b[i]] -= 1;
        if (m[b[i]] < 0)
        {
            cout << 0 << "\n";
            return;
        }
    }
    if (a.size() == b.size())
    {
        cout << 2 << "\n";
        return;
    }
    else cout << 3 << "\n";


}
void solve()
{
    str a, b;
start:
    while (cin >> a >> b)
    {
        check(a, b);
    }
}
int main()
{
    freopen("p45.inp", "r" ,stdin);
    freopen("p45.out", "w", stdout);
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
