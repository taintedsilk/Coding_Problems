#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("INP.txt", "r" , stdin);
    freopen("OUT.txt", "w", stdout);
    long long n, a[100000], s;
    cin >> n;
    for (long long i = 0;i < n; i += 1) {
        cin >> a[i];}
    for (long long i = 0;i < n; i += 1){
            s = 0;
        for (long long j = i - 1; j >= 0; j -= 1) {
            if (a[j] > a[i]) {
                s += 1;
            }}
            cout << s << " ";

        }}


