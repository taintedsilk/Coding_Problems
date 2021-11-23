#include <iostream>
#include <stdio.h>
#include <sstream>
using namespace std;

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    string a;
    cin >> a;
    stringstream ss;
    int h, m;
    for (int i = 0; i < a.size(); i += 1) {
        if (a[i] != ':') {
        ss << a[i];
        }
        else {
            ss >> h;
            ss.clear();
        }

    }
    ss >> m;
    int change_h = (24 - h) + (29 - h) / 10 + 1;
    int change_m = (59 - m) + (59 - m) / 10 + 2;
    cout << change_h + change_m + 66*(24 - h - 1);
}
