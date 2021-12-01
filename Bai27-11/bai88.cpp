#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, a;
    cin >> n;
    long long total = 0;
    long long highest = LLONG_MIN;
    for (int i = 0; i < n; i += 1) {
        cin >> a;
        total += a;
        highest = max(a, highest);
    }
    cout << max(highest * 2, total);
}
