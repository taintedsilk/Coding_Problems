#include <iostream>
#include <map>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{

    map<char, int>m;
    long long n;
    cin >> n;
    string a;
    cin >> a;
    m[a[0]] += 1;
    string c = "";
    for (long long i = 1; i < n; i += 1) {
        if (a[i] == 'B') { // add && !c.empty() ?
            m[a[c.length()]] -= 1;
            c.pop_back(); //replace with c = substr(0, c.size - 1)

        }
        else {
            c += a[i];
            m[a[i]] += 1;
        }
    }
    cout << m['G'] << " " << m['R'] - m['L'];
}
