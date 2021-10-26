#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    long long a, num, temp;
    cin >> a;
    while (1) {
    ostringstream convert;
    convert << a;
    string temp = convert.str();
    stringstream ss;
    ss << temp[0];
    ss >> num;
    for (long long i = 1; i < temp.length(); i += 1) {
        ss << temp[i];
        ss >> num;
    }
}
