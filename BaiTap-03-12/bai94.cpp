#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string arr[3000];
    for (int i = 0; i < n; i += 1)
    {
        cin >> arr[i];
    }
    int dis = INT_MAX;
    for (int j = 0; j < m; j += 1)
    {
        for (int i = n - 1; i >= 0; i -= 1)
        {
            if (arr[i][j] == '.')
            {
                for (int k = i - 1; k >= 0; k -= 1)
                {
                    if (arr[k][j] == 'X')
                    {
                        dis = min(dis, i - k);
                        break;
                    }

                }
                break;
            }
        }
    }
    char temp;
    for (int i = 0; i < m; i += 1)
    {
        for (int j = n - 1; j >= 0; j -= 1)
        {
            if (arr[j][i] == 'X')
            {
                temp = arr[j][i];
                arr[j][i] = (char)arr[j + dis][i];
                arr[j + dis][i] = temp;
            }

        }
    }
    for (int i = 0; i < n; i += 1)
    {
        cout << arr[i] << "\n";
    }
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
