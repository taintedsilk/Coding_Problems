#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef bool bol;
typedef string str;
 

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (c % 3 == 0) {
        if (c % 2 == 0)cout << (a - b + 2000000014) % 1000000007;
        else cout << (b - a + 2000000014) % 1000000007;
    }
    else if (c % 3 == 1) {
        if (c % 2 == 0) cout << (-a + 2000000014)% 1000000007;
        else cout << (a + 2000000014) % 1000000007;
    }
    else {
        if (c % 2 == 0) cout << (b + 2000000014) % 1000000007;
        else cout << (-b + 2000000014) % 1000000007;}
 
}
int main()
{
    freopen("p47.inp", "r" ,stdin);
    freopen("p47.out", "w", stdout);
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
