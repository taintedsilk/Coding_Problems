#include <bits/stdc++.h>

using namespace std;
string arr[1000];
pair<int ,int>p[1000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i += 1) {
        cin >> arr[i];
    }
    int mid;
    for (int i = 0; i < r; i += 1) {
        string a;
        p[i].first = arr[i].find('J');
        if (p[i].first != string::npos) {
            reverse(arr[i].begin(), arr[i].end());
            p[i].second = c - 1 - arr[i].find('J');
        }
        else {
            p[i].first = -1;
            p[i].second = -1;
        }

    }
    //for (int i = 0; i < r; i += 1) {
    //    cout << p[i].first << " " << p[i].second<< "\n";
    //}
    long long loc = 0, step;
    step = 0;
    for (int i = r - 1; i >= 0; i -= 1) {
        if ((r - 1 - i) % 2 == 0) {
            if (p[i].second != -1) {
            step += abs(loc - p[i].first);
            step += p[i].second - p[i].first;

            loc = p[i].second;}
            }
        else {
            if (p[i].first != -1) {
            step += abs(loc - p[i].second);
            step += p[i].second - p[i].first;
            loc = p[i].first;
            }

        }
        //cout << loc << " ";
        //cout << step << "\n";
        }
    for (int i = 0; i < r; i += 1) {
        if (p[i].first == -1) {
            step -= 1;
        }
        else break;
    }
    cout << step + r - 1;
}
