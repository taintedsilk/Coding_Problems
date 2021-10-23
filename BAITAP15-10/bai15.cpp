#include <iostream>
#include <stdio.h>
using namespace std;

struct Line {
    long long s = 1, f;
    bool free = false; };


int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long row, col;
    cin >> row >> col;
    long long res = row*col;
    long long arr[100][100];

    Line obj[100];

    long long start, finish;
    long long high;
    for (long long i = 0; i < row; i += 1) {
        for (long long j = 0; j < col; j += 1) {
            cin >> arr[i][j];
        }
    }
    for (long long i = 1; i < row - 1; i += 1) {
        high = arr[i][0];
        while (arr[i][obj[i].s] >= high) {
            high = arr[i][obj[i].s];
            obj[i].s += 1;
        }
        high = arr[i][col - 1];
        obj[i].f = col - 1;
        while (arr[i][obj[i].f] >= high && obj[i].f > obj[i].s) {
            high = arr[i][obj[i].f];
            obj[i].f -= 1;
        }
        if (obj[i].f < obj[i].s) obj[i].free = true;}
    for (long long i = 0; i < row; i += 1) {
        cout << obj[i].s << " " << obj[i].f;
        cout << "\n";}
    long long b, e;
    long long j;
    for (long long i = 1; i < col - 1; i += 1) {
        high = arr[0][i];
        start = 1, finish = row - 1;
        while (arr[start][i] >= high) {
            high = arr[start][i];
            start += 1;
        }
        high = arr[row - 1][i];
        while (arr[finish][i] >= high && finish >= start) {

            high = arr[finish][i];
            finish -= 1;
        }
        // this part
        for (b = start; b <= finish; b += 1) {
            if (obj[i].s <= i || obj[i].f >= i) {
                break;
            }
        }
        for (e = finish; e >= b; e -= 1) {
            if (obj[i].s <= i || obj[i].f >= i) {
                break;
            }
        }
        //
        cout << b << " " << e;
        cout <<"\n";
        if (b <= e)
            {res -= (e - b + 1);}
        }
        cout << res;
    }


