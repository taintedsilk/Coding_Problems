#include <iostream>
#include <cmath>
#include <math.h>
#include <sstream>
using namespace std;

long long sum_digit(long long n) {
    stringstream ss, ss1;
    ss << n;
    string a = ss.str();
    int b;
    long long total = 0;
    for (long long i = 0; i < a.size(); i += 1) {
        ss1 << a[i];
        ss1 >> b;
        ss1.clear();
        total += b;
    }
    return total;

}

long long Divisors(long long n)
{
    long long total = 0;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {

            if (n / i == i){
                total += sum_digit(i);
            }
            else {
                total += sum_digit(i);
                total += sum_digit(n / i);}}}
    return total;
}


int main()
{
    long long n;
    cin >> n;
    long long prev;
    bool done = false;
    for (long long i = 0; i < 1000; i += 1) {
        prev = n;
        n = Divisors(n);
        if (prev == n) {cout << i + 1; done = true; break;}
        cout << prev << " " << n << "\n";
        }

    if (done == false) {cout << -1;}
}
