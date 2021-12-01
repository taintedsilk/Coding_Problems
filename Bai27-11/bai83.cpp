#include <bits/stdc++.h>

using namespace std;

int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    char arr[10];
    long long b; char c;
    char cov[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (int i = 1; i <= 9; i += 1) {
        cin >> b;
        arr[b] = cov[i];
    }
    string a;
    cin >> a;
    int time;
    int last = 0;
    for (int i = 0; i < a.size(); i += 1) {
        if (a[i] == 'a' || a[i] == 'b' || a[i] == 'c') {
            time = a[i] - 'a' + 1;
            string a(time, arr[2]);
            if (last == 2) cout << '#';
            cout << a;
            last = 2;
        }
        else if (a[i] == 'd' || a[i] == 'e' || a[i] == 'f') {
            time = a[i] - 'd' + 1;
            string a(time, arr[3]);
            if (last == 3) cout << '#';
            cout << a;
            last = 3;
        }
        else if (a[i] == 'g' || a[i] == 'h' || a[i] == 'i') {
            time = a[i] - 'g' + 1;
            string a(time, arr[4]);
            if (last == 4) cout << '#';
            cout << a;
            last = 4;
        }
        else if (a[i] == 'j' || a[i] == 'k' || a[i] == 'l') {
            time = a[i] - 'j' + 1;
            string a(time, arr[5]);
            if (last == 5) cout << '#';
            cout << a;
            last = 5;
        }
        else if (a[i] == 'm' || a[i] == 'n' || a[i] == 'o') {
            time = a[i] - 'm' + 1;
            string a(time, arr[6]);
            if (last == 6) cout << '#';
            cout << a;
            last = 6;
        }
        else if (a[i] == 'p' || a[i] == 'q' || a[i] == 'r' || a[i] == 's') {
            time = a[i] - 'p' + 1;
            string a(time, arr[7]);
            if (last == 7) cout << '#';
            cout << a;
            last = 7;
        }
        else if (a[i] == 't' || a[i] == 'u' || a[i] == 'v') {
            time = a[i] - 't' + 1;
            string a(time, arr[8]);
            if (last == 8) cout << '#';
            cout << a;
            last = 8;
        }
        else if (a[i] == 'w' || a[i] == 'x' || a[i] == 'y' || a[i] == 'z') {
            time = a[i] - 'w' + 1;
            string a(time, arr[9]);
            if (last == 9) cout << '#';
            cout << a;
            last = 9;
        }

    }
}
