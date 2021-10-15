#include <iostream>

using namespace std;

int main() {
long long n, a[100000], idx;
long long j;
bool no = false, found = false;
cin >> n;
for (long long i = 0; i < n; i += 1) {
    cin >> a[i];
}
for (long long i = 0; i < n; i += 1) {
    if (n % (i + 1) == 0) {
    no = false;
    j = i + 1;
    while (j < n) {
        if (a[j] != a[j % (i + 1)]) {
                no = true;
                break;}
        j += 1;
        }
    }
    if (!no) {cout << i + 1;
    found = true;
    break;

    }
}
if (!found) cout << n;

}
