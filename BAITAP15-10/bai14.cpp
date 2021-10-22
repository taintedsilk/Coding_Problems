#include <iostream>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <stdio.h>

using namespace std;
  freopen("INP.txt", "r", stdin);
  freopen("OUT.txt", "w", stdout);
int main() 
{
long long n;
cin >> n;
long long mid = n/2 + 1;
long long a;
cin >> a;
long long x, y;
long long xdis, ydis, s = 0;
for (long long i = 0; i < a; i += 1) {
    cin >> x >> y;
    xdis = abs(x - mid);
    ydis = abs(y - mid);
    s += min(xdis, ydis) * 15 + 10 * abs(xdis - ydis);
}
cout << s;
}
