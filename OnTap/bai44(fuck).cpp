#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

bool is_not_digit(char c)
{
    return !isdigit(c);
}
bool string_compare(string a, string b) {
    int n1,n2;
    stringstream ss;
    ss << a;
    ss << b;
    ss >> n1;
    ss.clear();
    ss << b;
    ss << a;
    ss >> n2;
    return n1 > n2;
}



int main()
{

    long long n;
    cin >> n;
    string arr[50];
    for (long long i = 0; i < n; i += 1) {
        cin >> arr[i];
    }
    sort(arr, arr + n, string_compare);
    for (long long i = 0; i < n; i += 1) {
        cout << arr[i];
    }
}
