#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct Bot {
long long x, y;
char d;
    void G() {
        switch(d) {
    case '^':
        y += 1;
        break;
    case '<':
        x -=1;
        break;
    case '>':
        x += 1;
        break;
    case 'v':
        y-= 1;
        break;}}

    void L() {
        switch(d) {
    case '^':
        x -= 1;
        d = '<';
        break;
    case '<':
        y -= 1;
        d = 'v';
        break;
    case 'v':
        x += 1;
        d = '>';
        break;
    case '>':
        y += 1;
        d = '^';
        break;}
    }

    void R() {
    switch(d) {
        case '^' :
            x += 1;
            d = '>';
            break;
        case '>':
            y -= 1;
            d = 'v';
            break;
        case 'v':
            x -= 1;
            d = '<';
            break;
        case '<':
            y += 1;
            d = '^';
    }}

    void B() {
        switch(d) {
    case '^':
        y -= 1;
        d = 'v';
        break;
    case '>':
        x -= 1;
        d = '<';
        break;
    case 'v':
        y += 1;
        d = '^';
        break;
    case '<':
        x += 1;
        d = '>';
        break;}
    }

    };






int main()
{

	freopen("INP.txt", "r", stdin);
  	freopen("OUT.txt", "w", stdout);
    long long n;
    cin >> n;
    string a;
    cin >> a;
    Bot uwu;
    uwu.x = 0; uwu.y = 0; uwu.d = '^';
    for (long long i = 0; i < n;i += 1) {
        switch(a[i]) {
    case 'G':
        uwu.G();
        break;
    case 'L':
        uwu.L();
        break;
    case 'R':
        uwu.R();
        break;
    case 'B':
        uwu.B();
        break;}
    }
    cout << uwu.x << " " << uwu.y;}


