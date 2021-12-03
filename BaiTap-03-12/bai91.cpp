#include <iostream>
#include <map>
using namespace std;
typedef long long ll;
void solve() {
    ll n, k;
    cin >> n >> k;
    map<ll ,ll>m;
    map<ll ,ll>m1;
    map<ll ,ll>m2;
    map<ll ,ll>m3;
    ll a, b;
    for (int i = 0; i < n; i += 1) {
        cin >> a >> b;
        m[a] += 1;
        m1[b] += 1;
        m2[b - a] += 1;
        m3[b + a] += 1;
        if (m[a] == k || m1[b] == k || m2[b - a] == k || m3[b + a] == k) {
            cout << i + 1;
            for (i += 1; i < n; i += 1) {
                cin >> a >> b;
            }
            return;
        }
    }


}

int main()
{
    freopen("INP.txt", "r" ,stdin);
    freopen("TRAKTOR.OUT", "w", stdout);
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
