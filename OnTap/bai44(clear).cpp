#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;

struct Number {
string old;
string newer = "";
long long n;
bool operator< (const Number &other) const {
        return n < other.n;
}};


int main() {
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    Number arr[50];
    long long n, a;
    cin >> n;
    cin >> arr[0].old;
    long long big_size = arr[0].old.length();
    for (long long i = 1; i < n; i += 1) {
        cin >> arr[i].old;
        a = arr[i].old.length();
        big_size = max(big_size, a);
    }
    big_size += 1;
    stringstream ss;
    for (long long i = 0; i < n; i += 1) {
        while (arr[i].newer.length() < big_size){
        arr[i].newer += arr[i].old;}
        arr[i].newer = arr[i].newer.substr(0, big_size);
        ss << arr[i].newer.substr(0, big_size);
        ss >> arr[i].n;
        ss.clear();
    }

    sort(arr, arr+n);
    for (long long i = n - 1; i >= 0; i -= 1) {
        cout << arr[i].old;
    }

    }
