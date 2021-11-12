#include <iostream>
#include <stdio.h>
#include <sstream>
using namespace std;
long long total(long long n) {
    stringstream ss, ss1;
    ss << n;
    string a;
    ss >> a;
    long long b,t = 0;
    for (long long i = 0; i < a.size(); i += 1) {
        ss1 << a[i];
        ss1 >> b;
        t += b;
        ss1.clear();
    }
    return t;
    }


int main()
{   
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long n;
    cin >> n;
    for (long long i = n - 1;;i-=1) {
        if (i + total(i) == n) {cout << i;
        break;
    }
}}
