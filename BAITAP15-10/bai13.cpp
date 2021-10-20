#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;

int main()
{
	freopen("INP.txt",  "r", stdin);
	freopen("OUT.txt", "w", stdout);
    map<char, int>m;
    long long n;
    cin >> n;
    string a;
    cin >> a;
    m[a[0]] += 1;
    long long prev_counter = 0;
    for (long long i = 1; i < n; i += 1) {
        if (a[i] == 'B') {
            if (prev_counter == 0) prev_counter += 1;
            else prev_counter += 2;
            m[a[i - prev_counter]] -= 1;}
        else {
        prev_counter = 0;
        m[a[i]] += 1;
    }
}
    cout << m['G'] << " " << m['R'] - m['L'];}
