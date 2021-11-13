#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("INP.txt", "r" , stdin);
  	freopen("OUT.txt", "w", stdout);
    long long m = -1;
    long long n;
    cin >> n;
    while (n != 1) {
        m = max(n, m);
        if (n % 2 == 0) {
            n /= 2;
        }
        else n += 2 * n + 1;
    }
    cout << m;
}
