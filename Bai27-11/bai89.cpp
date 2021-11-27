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
    long long m = LLONG_MIN;
    for (int i = 0; i < 8 ; i += 1) {
        m = max(arr[i % 8] + arr[(i + 1) % 8] + arr[(i + 2) % 8] + arr[(i + 3) % 8], m);
    }
    cout << m;}
