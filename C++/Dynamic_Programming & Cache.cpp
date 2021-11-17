#include <bits/stdc++.h>
using namespace std;
long long n, a, b, c;
long long cache[4001] = {0};
long long f (long long n, int a, int b, int c) {
        if (n == 0) return 0;
        if (n < 0) return LLONG_MIN;
        if (cache[n] != 0) return cache[n];
        return cache[n] = 1 + max({f(n - a, a, b, c), f(n- b, a,b,c), f(n - c,a,b,c)});}
 
int main() {
    cin >> n >> a >> b >> c;
    cout << f(n,a,b,c);
}
