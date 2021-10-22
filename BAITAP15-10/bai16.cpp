#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[1000];
    for (long long i = 0 ; i  <n; i += 1) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    while (arr[n - 4] < ((double) arr[n-1] / 2)) {
        n -= 1;
    }
    for (long long i = 0; i < n; i += 1) {
        cout << arr[i] << " ";
    }
}
