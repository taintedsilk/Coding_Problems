#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;

bool check_palin(int number) {
    ostringstream convert;
    convert << number;
    string temp = convert.str();
    string c = temp;
    reverse(c.begin(), c.end());
    if (c == temp) return true;
    else return false;
    }

int add_reverse(int number){
    ostringstream convert;
    stringstream ss;
    convert << number;
    string temp = convert.str();
    int num;

    reverse(temp.begin(), temp.end());
    ss << temp;
    ss >> num;
    return number + num;}

int main()
{

    unsigned long long b;
    cin >> b;
    while (!check_palin(b)) {b = add_reverse(b);
    cout << b << " ";}
    cout << b;
}

