#include <iostream>
#include <stdio.h>
using namespace std;


int div(int n, int k, int* c) {
    if (((n + k) % 2) != 0 || n <= (k + 1)) {return 0;}
    *c += 1;
    div((n + k)/ 2, k, c);
    div((n - k)/ 2, k, c);
    }

int main() {
	freopen("INP.txt", "r" , stdin);
  	freopen("OUT.txt", "w", stdout);
    int c = 1;
    int n, k;
    cin >> n >> k;
    div(n, k , &c);
    cout << c;
}
