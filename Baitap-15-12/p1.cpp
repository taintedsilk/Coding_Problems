#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;


ll n;
str a;
bool check(str a) {
for (ll i = 0; i < a.size(); i += 1) {
    if (a[i] == 'O') return false;
}
return true;
}

void solve()
{
    cin >> a;
    vector<ll>v;
    for (ll i = 1; i <= 12; i += 1) {
        if (12 % i == 0) {
        for (ll j = 0; j < i; j += 1) {
            str b;
            for (ll k = j; k <= 12; k += i) {b += a[k];}
            if(check(b)) {v.push_back(i); break;}
        }
    }
    }
    cout << v.size() << " ";
    for (ll i = v.size()- 1; i >= 0; i -= 1) {
        cout << 12/ v[i] << "x" << v[i] << " ";
    }


}


int main()
{
    freopen("p1.inp", "r" ,stdin);
    freopen("p1.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    for (int i = 0; i < t; i += 1)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
