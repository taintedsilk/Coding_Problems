#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    freopen("INP.txt",  "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long n;
    long long v[100][100];
    cin >> n;
    long long x = 0, y =0;
    long long change = 1;
    long long arr[10000];
    // segment 1
    for (long long i = 0 ; i < (n * n); i += 1) {
        cin >> arr[i];
    }
    sort(arr, arr + (n*n));

    for (long long i = 0; i < (n * n); i += 1) {
        v[x][y] = arr[i];
        y += change;
        if (y == n) {
            x += 1;
            change = -1;
            y -= 1;
        }
        else if (y == -1) {
            x += 1;
            change = 1;
            y += 1;
        }
}

    for (long long i = 0; i < n; i += 1) {
        for (long long j = 0; j < n; j += 1) {
            cout << v[i][j] << " ";
    }
    cout << "\n";
}
    // segment 2
    change = 1;
    x = 0; y = 0;
    for (long long i = (n * n) - 1; i != -1; i -= 1) {
        v[x][y] = arr[i];
        x += change;
        if (x == n) {
            y += 1;
            change = -1;
            x -= 1;
        }
        else if (x == -1) {
            y += 1;
            change = 1;
            x += 1;
        }
}
for (long long i = 0; i < n; i += 1) {
        for (long long j = 0; j < n; j += 1) {
            cout << v[i][j] << " ";
    }
    cout << "\n";
}
// segment 3
    x = y = 0;
    change = 1;
    long long maxx = n, maxy = n, minx = 0, miny = -1;
    for (long long i = 0; i < (n * n); 1) {
        while (i < (n * n) && y < maxy) {
            v[x][y] = arr[i];
            i += 1;
            y += 1;
        }
        y -= 1;
        x += 1;
        maxy -= 1;
        while (i < (n * n) && x < maxx) {
            v[x][y] = arr[i];
            i += 1;
            x += 1;
        }
        x -= 1;
        y -= 1;
        maxx -= 1;
        while (i < (n * n) && y > miny) {
            v[x][y] = arr[i];
            i += 1;
            y -= 1;
        }
        y += 1;
        x -= 1;
        miny += 1;
        while (i < (n * n) && x > minx) {
            v[x][y] = arr[i];
            i += 1;
            x -= 1;
        }
        x += 1;
        y += 1;
        minx += 1;
    }
    for (long long i = 0; i < n; i += 1) {
        for (long long j = 0; j < n; j += 1) {
            cout << v[i][j] << " ";
    }
    cout << "\n";
}

    //segment 4
    x = 0; y = 0;
    long long i = 0, total = 0;
    while (x != n) {
        x = 0;
        y = total;
        while (y != -1){
        v[x][y] = arr[i];
        x +=1;
        y -= 1;
        i += 1;
        }
        total += 1;
}
    x = 1;
    total = 1;

    for (long long j = 0; j < n - 1; j += 1) {
        x = total;
        y = n - 1;
        while (x != n) {
            v[x][y] = arr[i];
            x += 1;
            y -= 1;
            i += 1;
        }
        total += 1;
    }
    for (long long i = 0; i < n; i += 1) {
        for (long long j = 0; j < n; j += 1) {
            cout << v[i][j] << " ";
    }
    cout << "\n";
    }}
    //done
