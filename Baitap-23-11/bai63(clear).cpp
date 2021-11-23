#include <iostream>
#include <stdio.h>
using namespace std;
void solve(int arr[]) {
    for (int i = 0; i < 4; i += 1) {
        if (arr[i % 4] + arr[(i + 1) % 4] + arr[(i + 2) % 4] <= arr[(i + 3) % 4])
            { cout << "NO\n"; return;}
    }
    cout << "YES\n"; return;
    }



int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    int arr[4];
    while (cin >> arr[0]) {
        cin >> arr[1] >> arr[2] >> arr[3];
        solve(arr);
    }
}
