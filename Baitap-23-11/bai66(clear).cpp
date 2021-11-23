#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long m, n;
    cin >> m >> n;
    long long arr[10000];
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }
    if (m > n) {m = n;}
    sort(arr, arr+n);
    long long res = LLONG_MIN;
    for (int i = n - m; i < n; i += 1) {
        res = max(res, (n - i) * arr[i]);
    }
    cout << res;
}

