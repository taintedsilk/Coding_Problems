#include <bits/stdc++.h>

using namespace std;



int main()
{   
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long x1, x2, y1, y2, t;
    cin >> x1 >> y1 >> x2 >> y2 >> t;
    if (x1 == 0 && y1 == 0) {
        if (t == 0) {cout << "MULTIPLE";
        return 0;}
        else {cout << "NONE";
        return 0;}
    }
    else if (x2 == 0 && y2 == 0) {
        cout << "NONE";
        return 0;
    }
    else if ((double) x1 / x2 == (double) y1 / y2) {
        if ((double) x1 / x2 == (double) t) {
            cout << "MULTIPLE";
            return 0;
        }
        else {
            cout << "NONE";
            return 0;
        }
    }
    long long up = y2 * t - y1;
    long long down = x1 - t*x2;
    if (down == 0) {
        cout << "NONE";
        return 0;
    }
    if (up == 0) {
        cout << "MULTIPLE";
        return 0;
    }
    long long g = __gcd(up, down);
    up /= g;
    down /= g;
    cout << up << "/" << down;
}
