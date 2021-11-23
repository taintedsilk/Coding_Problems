#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double H, W, w1, w2;
    cin >> H >> W >> w1 >> w2;
    double total = 0;
    total += w1* W;
    total += (w1 + w2) * H;
    total += sqrt(H*H + (w2 - w1) * (w2 - w1)) * W;
    cout << fixed << setprecision(5) << total;
}
