#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long n, m;
    cin >> n >> m;
    long long total = 0, current = 0;

    for (long long i = 1; i <= n; i ++) {
        current = (current + i) % m;
        if (!current) total += 1;
    }
    cout << total;
}
