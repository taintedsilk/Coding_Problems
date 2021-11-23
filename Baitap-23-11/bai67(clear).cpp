#include <bits/stdc++.h>
using namespace std;

int main()
{
  	freopen("INP.txt", "r", stdin);
  	freopen("OUT.txt", "w", stdout);
    map<int, int>m;
    long long n, a;
    cin >> n;
    for (long long i = 0; i < n; i += 1) {
        cin >> a;
        m[a] += 1;
    }
    map<int, int>::iterator it;
    if (!m[1]) cout << 1;
    else {
    long long c = m[1];
    it = m.begin();
    for (it++; it!=m.end();it++) {
        if (c < it->first - 1) {break;}
        else {c += it->first * it->second;}
    }
    cout << c + 1;}
}
