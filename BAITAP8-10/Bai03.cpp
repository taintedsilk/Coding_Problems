#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <map>
using namespace std;

int main()
{

    long long n, a;
    cin >> n;
    map <long long, int> m;
    map <long long, int>::iterator it;
    for (long long i = 0; i < n; i += 1) {
        cin >> a;
        m[a] += 1;
    }
    cout << m.size() << "\n";
    for(it = m.begin(); it != m.end(); it++ ) {
        cout << it->first << " " << it->second << "\n";
    }}
