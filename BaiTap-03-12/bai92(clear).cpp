#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;
typedef long long ll;
typedef bool bol;
void solve() {
    ll n, k;
    cin >> n >> k;
    ll a, b;
    ll prev, keep, res = 0;
    cin >> prev >> keep;
    bol last = false;
    if (prev <= k && keep == 1) {res += 1; last = true;}
    else if (prev > k && keep == 0) {res += 1; last = true;}
    for (int i = 1; i < n; i += 1) {
        cin >> a >> b;
        if (a <= k && b == 1) {res += 1; last = true;}
        else if (a > k && b == 0) {res += 1; last = true;}
        else {
            if (last == true) last = false;
            else if (a <= k && prev > k && keep == 1) {
                res += 2;
                last = true;

            }
            else if (a > k && prev <= k && keep == 0) {
                res += 2;
                last = true;
            }
            prev = a;
            keep = b;
        }}
    cout << res;


}

int main()
{
    freopen("INP.txt", "r" ,stdin);
    freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //long long t;
    //cin >> t;
    for (int i = 0; i < 1; i += 1)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
