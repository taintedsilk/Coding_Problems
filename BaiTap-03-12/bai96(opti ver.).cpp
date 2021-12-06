#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;

ll arr[1000000];
void solve()
{
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];

    }
    ll key = 1, time = 0;
    ll loop = 0;
    for (int i = 0; i < n; i += 1) {
        if (key < arr[i % n]) {
            loop += arr[i % n] - key;
            key = arr[i % n];
        }
        else if (key > arr[i % n]) {
            loop += arr[i % n] + n - key;
            key = arr[i % n];
        }
    }

    if ((k / n) == 0) {
        key = 1;
    }
    for (int i = 0; i < k % n; i += 1) {
        if (key < arr[i % n]) {
            time += arr[i % n] - key;
            key = arr[i % n];
        }
        else if (key > arr[i % n]) {
            time += arr[i % n] + n - key;
            key = arr[i % n];
        }
    }
    cout << loop * (k / n) + time;


}
int main()
{
    //freopen("INP.txt", "r" ,stdin);
    //freopen("OUT.txt", "w", stdout);
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
