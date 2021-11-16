#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

bool palin(string a) {
    string b = a;
    reverse(b.begin(), b.end());
    if (b == a) return true;
    else return false;
    }




int main()
{
    freopen("INP.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    string word;
    cin >> word;
    bool found = false;
    tolower(word[0]);
    for (int i = 0; i < word.size(); i += 1) {
        if (palin(word)) {
            found = true;
            cout << "YES";
            break;}
        word += word[0];
        word.erase(word.begin(), word.begin() + 1);

    }
    if (found == false) cout << "NO";
}
