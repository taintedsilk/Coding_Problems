#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long arr[8];
    for (int i = 0; i < 8; i += 1) {
        cin >> arr[i];
    }
    sort(arr, arr + 8);
    cout << arr[7] + arr[6] + arr[5];
}
