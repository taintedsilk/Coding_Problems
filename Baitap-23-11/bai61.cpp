#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long a , b, c;
    cin >> a >> b >> c;
    long long n;
    long long total = a * 493 + b * 29 + c;
    cin >> n;
    for (long long i = 0; i < n;i += 1) {
        cin >> a >> b >> c;
        total -= a * 493 + b * 29 + c;
    }

    if (total >= 0) cout << total /493 << " " << (total % 493)/ 29 << " " << ((total % 493)%29) ;
    else cout << -1;
}
