#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long n;
    cin >> n;
    long long arr[1000];
    long long total = 0;
    for (long long i = 0; i < n; i += 1) {
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr, arr + n);
    total -= (arr[n - 1] + arr[n-2] + arr[n-3]);
    long long first = 0;
    long long step = 0, sum;
    double last;
    bool done = false;
    if (n <= 3) {cout << -1;}
    else {
        while ((n - first + 1) > 3){
            sum = (arr[n - 1] + arr[n-2] + arr[n-3]);
            last = arr[n - 1] - arr[n - 4];
            if (sum < total) {done = true; break;}
            if (last > arr[n - 4]) {
                if (last > abs(arr[first])) {
                total -= arr[n - 4];
                n -= 1;
                step += 1;}

            else {
                total -= arr[first];
                first += 1;
                step += 1;
            }}
            else {break;}}
        if (done) {cout << step;}
        else {
        while (arr[first] < 0 && (n - first + 1) > 3) {
            first += 1;
            step += 1;
            total -= arr[first];
            if (sum < total) {
                cout << step;
                done = true;
                break;
            }
        }}
        if (!done) {cout << -1;}
        


    }}

