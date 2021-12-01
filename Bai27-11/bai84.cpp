#include <bits/stdc++.h>

using namespace std;


map<string, int>m;
string arr[200000];
int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    string a;
    cin >> n;
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i += 1) {
        cin >> a;
        m[a] += 1;
    }
    for (int i = 0; i < n; i += 1) {
        if (!m[arr[i]]) {
            cout << arr[i];
            break;
        }
        else m[arr[i]] -= 1;
    }
}

