#include <iostream>
#include <stdio.h>

using namespace std;

    int SmallSubArr(int arr[], int n) {
        int min_ending = 2147483647;
        int mini = 2147483647;
        for (long long i = 0; i < n; i += 1) {
            if (min_ending > 0) min_ending = arr[i];
            else min_ending += arr[i];
            mini = min(min_ending, mini);
        }
        return mini;}

    int MinCircularSum(int arr[], int n) {
        long long normal = SmallSubArr(arr, n);

        long long corner_case = 0;
        for (long long i = 0; i < n; i += 1) {
            corner_case += arr[i];
            arr[i] = -arr[i];
        }
        corner_case = corner_case + SmallSubArr(arr, n);

        return min(corner_case, normal);
    }

int main() {
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w" , stdout);

int n,a[100000];
cin >> n;
for (long long i=0;i<n;i+=1) {
    cin >> a[i];
}
cout << MinCircularSum(a, n);
}
