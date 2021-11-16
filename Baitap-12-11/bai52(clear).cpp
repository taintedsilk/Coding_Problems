#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    stringstream ss;
    long long n;
    cin >> n;
    string a = "", b;
    for (long long i = 1; i <= n; i += 1) {
        ss << i;
        b = ss.str();
        ss.str(string());
        if (a.find(b) == string::npos) {a += b;}
    }
    cout << a;
}
