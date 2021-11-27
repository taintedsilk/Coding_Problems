#include <bits/stdc++.h>

using namespace std;

int cov(char a) {
stringstream ss;
int res;
ss << a;
ss >> res;
return res;}

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;
    bool c1 = false;
    long long total = 0;
    for (int i = 0; i < a.size(); i += 1) {
        if (a[i] == '0') c1 = true;
        total += cov(a[i]);
    }
    if (total % 3 == 0 && c1) {
        sort(a.begin(), a.end(), greater<char>());
        cout << a;
    }
    else {cout << -1;}
}
