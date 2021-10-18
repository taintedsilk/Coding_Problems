#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
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
