#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct A{
    long long x,y;};


int compar (const void * a, const void * b)
{
  A *c = (A *)a;
  A *d = (A *)b;

  return (c->y - d->y );
}






int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    A obj[100];
    long long a, n;
    cin >> n;
    long long mid = ceil((double)n / 2);
    for (long long i = 0; i < n; i += 1) {
        cin >> a;
        obj[i].x = a;
        cin >> a;
        obj[i].y = a;
    }
    qsort(obj, n, sizeof(A), compar);
    long long cost = 0;
    long long loc = obj[mid - 1].y;
    for (long long i = 0;i < n; i+= 1) {
        cost += abs(obj[i].y - loc);
    }
    cout << cost;
}
