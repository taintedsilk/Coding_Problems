#include <bits/stdc++.h>
using namespace std;

long long power(long long x, unsigned long long y, long long p)
{
    long long res = 1;

    x = x % p;

    if (x == 0) return 0;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;

        y = y/2;
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long a, b;
    cin >> a >> b;
    b -= 1;
    b = power(2,(b % 10000), 10000);

    cout << power(a, b, 10000);
}
