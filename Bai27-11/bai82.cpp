#include <bits/stdc++.h>

using namespace std;
void solve()
{
    long long n;
    long long x, y;
    cin >> n;
    long long max_x = LLONG_MIN, min_x = LLONG_MAX, max_y = LLONG_MIN, min_y = LLONG_MAX;
    for (int i = 0; i < n; i += 1) {
        cin >> x >> y;
        max_x = max(x, max_x);
        min_x = min(x, min_x);
        max_y = max(y, max_y);
        min_y = min(y, min_y);
    }
    cout << pow(max(max_x - min_x, max_y - min_y), 2);}





int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 1; i += 1)
    {
        solve();
        cout << "\n";
    }
}
