#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector< long long >>v;
    long long count = 1;
    for (long long i = 0; i < n; i += 1) {
        for (long long j = 0; j < n; j += 1) {
            v[i][j] = count;
            count += 1;
        }
    }
    // segment 1
    for (long long i = 0; i < n; i += 1) {
        if (i % 2 == 0) {
            for (long long j = i * n + 1; j < (i + 1) * n + 1; j += 1) {
                cout << j << " ";
            }
        }
        else {
            for (long long j = (i + 1) * n; j > i * n; j -= 1) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    // segment 2
    

    // segment 3
    // segment 4

}
