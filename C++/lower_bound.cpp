#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<long long>v;
    long long n, a;
    cin >> n;
    v.resize(n);
    for (long long i = 0; i < n; i += 1) {
        cin >> a;
        v[i] = a;
    }
    cin >> n;
    vector<long long>::iterator itr;
    for (long long i = 0; i < n; i += 1) {
        cin >> a;
        itr = lower_bound(v.begin(), v.end(), a);
        // FIND first index of number IN SORTED ARRAY
        // else return lowest higher number
        if (binary_search(v.begin(), v.end(), a)) cout << "Yes ";
        else cout << "No ";
        cout << itr - v.begin() + 1<< "\n";
    }
}
