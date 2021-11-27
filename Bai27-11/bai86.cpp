#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, j, p;
    cin  >> n >> j >> p;
    long long a, b;
    map<long long, long long>m;
    for (int i = 0; i < n; i += 1) {
        cin >> a >> b;
        if (!m[b]) m[b] = a;
    }
    for (int i = 0; i < n; i += 1) {
        if (!m[p]) {
            cout << p;
            return 0;
        }
        else {
            p = m[p];
        }
    }
    cout << -1;
}
