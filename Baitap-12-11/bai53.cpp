#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long n;
    cin >> n;
    long long res = 9999 - n + (9999 - n) / 10 + ((9999 - n) / 100) + ((9999 - n) / 1000);
    cout << res;
}
