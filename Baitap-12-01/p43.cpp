#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;

#define it1 it->first
#define it2 it->second


ll arr[26];
void solve()
{
    str a;
    cin >> a;
    ll k;
    cin >> k;

    ll m = LLONG_MIN, hi;

    for (ll i = 0 ;i < 26; i += 1) {
        cin >> arr[i];
        if (arr[i] > m) {
            m = arr[i];
            hi = i;
        }
    }
    ll t1 = 0;
    for (ll i = 0; i < a.size(); i += 1) {
        t1 += arr[a[i] - 'a'] * (i + 1);
    }
    for (ll i = a.size(); i < a.size() + k; i += 1) {
        t1 += m * (i + 1);
    }
    cout << t1;

}
int main()
{
    freopen("p43.inp", "r" ,stdin);
    freopen("p43.out", "w", stdout);
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
