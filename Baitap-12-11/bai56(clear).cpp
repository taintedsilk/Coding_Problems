#include <bits/stdc++.h>

using namespace std;

string convert(long long n) {
    stringstream ss;
    ss << n;
    return ss.str();

}

// ktra so nguyen to
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

long long get_total(long long n) {
    stringstream ss;
    string a = convert(n);
    long long total = 0;
    long long b;
    for (long long i = 0 ; i < a.size(); i += 1) {
        ss << a[i];
        ss >> b;
        ss.clear();
        total += b*b;
    }
    return total;
    }

int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    long long l, r;
    cin >> l >> r;
    long long m = -1;
    long long total, total2;
    for (long long i = l; i <= r; i += 1) {
        if (isPrime(i)) {
            m = i;
            total = get_total(i);
            for (i += 1; i <= r; i += 1) {
                if (isPrime(i)) {
                    total2 = get_total(i);
                    if (total2 > total) {
                        m = i;
                        total = total2;
                    }
                }
            }
        }
    }
    cout << m;
}
