#include <bits/stdc++.h>

using namespace std;

string to_string(long long n) {
    stringstream ss;
    ss << n;
    return ss.str();}


string binary(long long n) {
    string bin = "";
    stringstream ss;
    string a;
    while (n != 0) {
        ss << n % 2;
        ss >> a;
        bin += a;
        ss.clear();
        n /= 2;
    }
    return bin;}

long long dec(string bin) {
    long long number = 0;
    long long a;
    stringstream ss;
    for (long long i = bin.size() - 1; i >= 0; i -= 1) {
        ss << bin[i];
        ss >> a;
        ss.clear();
        number += a*(pow(2, bin.size() - 1- i));
    }
    return number;}


int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    unordered_set<long long>s;
    long long n;
    cin >> n;
    string bin = binary(n);
    reverse(bin.begin(), bin.end());
    long long result = 0;
    for (long long i = 1; i <= bin.size(); i += 1) {
        for (long long j = i; j <= bin.size(); j += 1) {
            string a = bin.substr(j - i, i);
            cout << a << " ";
            s.insert(dec(a));
        }
    }
    unordered_set<long long>::iterator it;
    for (it = s.begin(); it != s.end(); it ++) {
        result += *it;
    }
    cout << result;
}
