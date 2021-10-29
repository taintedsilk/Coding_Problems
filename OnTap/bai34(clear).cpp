#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    int n;
    int res = 0;
    cin >> n;
    for (long long i = n; i > 0; i -= 1) {
        res += i*(i+1);
    }
    long long a = 0;
    for (long long i = n; i >= 0; i -= 1) {
        res += (a * (i + 1));
        a += 1;
    }
    cout << res;
}
