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
    getline(cin, a);
    set<ll>s;
    for (ll i = 1; i < a.size(); i += 3) {
        if (isalpha(a[i])) s.insert(a[i]);
    }
    cout << s.size();

}



int main()
{
    freopen("p38.inp", "r" ,stdin);
    freopen("p38.out", "w", stdout);
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
