#include <bits/stdc++.h>
using namespace std;

long long digit(long long n) {
    ostream os;
    os << n;
    string a = os.str();
    long long total = 0;
    int b;
    stringstream ss;
    for (int i = 0; i < a.length(); i += 1) {
        ss << a[i];
        ss >> b;
        total += b;
        ss.clear();
    }
    return total;



int t(int n) {
    int total = 0;
    int s = sqrt(n);
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) total += digit(s);
    for (int i = 1; i < s; i += 1} {
        if (n % i == 0) {
            total += digit(i);
            total += digit(n / i);
        }
    return t;






int main()
{
    long long n;
    total = -;
    cin >> n;
    int sqr = sqrt(n);
    int n1, n2;
    int n1 = t(n);
    for (int i = 2; i <= 1000; i += 1) {
        n2 = t(n1);
        if (n2 == n1) {
            cout << i;
            break;}
        n1 = n2;

    }
}
