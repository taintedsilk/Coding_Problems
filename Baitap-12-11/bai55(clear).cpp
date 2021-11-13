#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long n;
    cin >> n;
    for (long long i = n / 2; i >= 1; i -= 1) {
        if (__gcd(i, n - i) == 1) {cout << i << "/" << n - i;
        break;}
    }
}
