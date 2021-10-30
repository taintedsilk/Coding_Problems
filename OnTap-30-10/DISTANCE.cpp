#include <iostream>
#include <sstream>
#include <cmath>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    freopen("distance.inp", "r", stdin);
    freopen("distance.out", "w", stdout);
    stringstream ss;
    string a, b;
    cin >> a >> b;
    int c, d, e, higher, lower, total = 0;
    for (long long i = 0; i < a.length();i += 1) {
        ss << a[i];
        ss >> c;
        ss.clear();
        ss << b[i];
        ss >> d;
        ss.clear();
        higher = max(c, d);
        lower = min(c, d);
        total += min(higher - lower, 10 - higher  + lower);
    }
    cout << total;
}
