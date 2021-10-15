#include <iostream>
#include <stdio.h>
using namespace std;

long long g(long long n, long long k) {
    if (n == 1) return 1;
            return (g(n - 1, k) + k - 1) % n + 1;
}

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w" , stdout);

    long long n,k, l;
    cin >> n >> k >> l;
    if (n == 1) {
        cout << 0;
    }

    else {
        long long a = g(n, k);
        cout << a << "\n";
        long long b = l - a + 1;
        while (b <= 0) b += n;
        b = b % n;
        if (b == 0) cout << n;
        else cout << b;}

    return 0;
}
