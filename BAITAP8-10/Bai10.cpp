#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
	freopen("INP.txt", "r", stdin);
	freopen("OUT.txt", "w" , stdout);

    bool found = false;
    long long n, a[100000], b[100000], target;
    long long co = 0;
    cin >> n;
    for (long long i = 0;i < n; i += 1) {
        cin >> a[i];
    }
    for (long long i = 0; i < n; i += 1) {
        b[i] = -1;
    }
    for (long long i = 1; i < n; i += 1) {
        if (a[i] == 0) {
            co = i;
        }
    }
    if (!co) {
        b[0] = n;
    }
    else b[co] = n;

    for (long long i = n - 1;i > 0; i -= 1) {
            target = 0;
            co = 0;
        for (long long j = 0; j < n; j += 1) {
            if (b[j] > i) {
                target += 1;
            }
            else if (a[j] == target) {
                co = j;
            }
        }

        if (!co) {
            b[0] = i;
        }
        else {
            b[co] = i;
        }}
    for (long long i = 0;i < n;i += 1) {
        cout << b[i] << " ";
    }}


