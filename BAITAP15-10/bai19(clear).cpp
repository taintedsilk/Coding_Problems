#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct P{
long long ar, time;};

int compar (const void * a, const void * b)
{
  P *c = (P *)a;
  P *d = (P *)b;

  return (c->ar - d->ar );
}

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long n, a;
    cin >> n;
    P obj[100];
    for (long long i = 0; i < n; i += 1) {
        cin >> a;
        obj[i].ar = a;
        cin >> a;
        obj[i].time = a;
    }
    qsort(obj, n, sizeof(P), compar);
    long long time = 0;
    for (long long i = 0; i < n; i += 1) {
        if (time < obj[i].ar) {
            time = obj[i].ar;
        }
        time += obj[i].time;
    }
    cout << time;
}
