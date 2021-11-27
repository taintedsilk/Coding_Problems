#include <iostream>
#include <stdio.h>
using namespace std;

void solve() {
long long n, a;
cin >> n;
long long total = 0;
for (int i = 1; i <= n; i ++) {
    cin >> a;
    cout << a * i - total << " ";
    total += a * i - total;
}}



int main()
{
  	freopen("INP.txt", "r", stdin);
  	freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
