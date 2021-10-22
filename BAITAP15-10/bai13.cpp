#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


int main()
{

    long long n;
    cin >> n;
    string a;
    cin >> a;
    char d = '^';
    long long x = 0, y = 0;
    for (long long i = 0; i < n; i += 1) {
    switch(d) {
    case '^': {
        switch(a[i]) {
            case 'G':
                y += 1;
                break;
            case 'R':
                x += 1;
                d = '>';
                break;
            case 'L':
                x -= 1;
                d = '<';
                break;
            case 'B':
                y -= 1;
                d = 'v';break;
        }}
    case 'v': {
    switch (a[i]) {
            case 'G':
                y -= 1;
                break;
            case 'R':
                {
                x -= 1;
                d = '<';break;
                }
            case 'L':
                {
                    x += 1;
                    d = '>';break;
                }
            case 'B':
                {
                    y += 1;
                    d = '^';break;
                }
    }
    }
    case '<':{
        switch (a[i]) {
        case 'G':
                {x -=1 ;break;}
            case 'R':
                {
                y += 1;
                d = '^';
                }
            case 'L':
                {
                    y -= 1;
                    d = 'v';break;
                }
            case 'B':
                {
                    x += 1;
                    d = '>';break;
                }
    }}
    case '>':
        switch (a[i]) {
        case 'G':
                {x += 1 ;break;}
            case 'R':
                {
                y -= 1;
                d = 'v';break;
                }
            case 'L':
                {
                    y += 1;
                    d = '^';break;
                }
            case 'B':
                {
                    x += 1;
                    d = '<';break;
                }
    }}}
    cout << x << " " << y;}


