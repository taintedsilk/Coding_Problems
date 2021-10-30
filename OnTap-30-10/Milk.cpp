#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("Milk.inp", "r", stdin);
    freopen("Milk.out", "w", stdout);
    map <int , int>m;
    long long n, k, a;
    cin >> n >> k;
    for (long long i = 0; i < n; i += 1) {
        cin >> a;
        m[a] += 1;
    }
    long long day = 0;
    long long excess = 0;
    long long spoil = 0;
    for (long long i = 0 ;i < n; i += k) {
        day += 1;
        excess += k;
        if (m[day] != 0)
        excess -= m[day];
        if (excess < 0){
        spoil += abs(excess);
        excess = 0;}
    }
    cout << spoil;}
