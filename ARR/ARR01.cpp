#include <iostream>

using namespace std;

int main()
{
    long long n, k, a;
    cin >> n >> k;
    long long arr[10000];
    cin >> arr[0];
    for (long long i = 1 ;i < n; i += 1) {
        cin >> a;
        arr[i] = arr[i - 1] + a;
    }
    int first, last = n - 1;
    int dis;
    for (long long i = n - 1; i >= 0; i -= 1) {
        if ((arr[n - 1] - arr[i]) > k) {dis = n - 1 - i;
        first = i;
        break;}
    }
    for (long long i = n - 1; i >= 0; i -= 1){
        for (long long j = 0; j < dis; j += 1){
            if (arr[i] - arr[i - j] > k) {
                dis = i - j;
                first = i - j;
                last = i;
                break;}
    }}
    cout << dis << "\n";
    for (long long i = first; i < last; i += 1) {
        cout << arr[i + 1] - arr[i] << " ";
    }

}
