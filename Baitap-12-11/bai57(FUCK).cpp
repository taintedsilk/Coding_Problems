#include <iostream>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <set>
#include <stdio.h>

using namespace std;

string to_string(long long n) {
    stringstream ss;
    ss << n;
    return ss.str();}


string binary(long long n) {
    string bin = "";
    while (n != 0) {
        bin += to_string(n % 2);
        n /= 2;
    }
    return bin;}

long long dec(string bin) {
    reverse(bin.begin(), bin.end());
    long long number = 0;
    long long a;
    stringstream ss;
    for (long long i = 0; i < bin.size(); i += 1) {
        ss << bin[i];
        ss >> a;
        ss.clear();
        number += a*(pow(2, i));
    }
    return number;}


int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    set<long long>s;
    long long n;
    cin >> n;
    string bin = binary(n);
    long long result = 0;
    for (long long i = 1; i <= bin.size(); i += 1) {
        for (long long j = i; j <= bin.size(); j += 1) {
            string a = bin.substr(j - i, i);
            s.insert(dec(a));
        }
    }
    set<long long>::iterator it;
    for (it = s.begin(); it != s.end(); it ++) {
        result += *it;
    }
    cout << result;
}
