// http://lequydon.ntucoder.net/Problem/Details/6366


#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, k;
    long long total = 0, a;
    long long stuff[100000];
    cin >> n >> k;
    for (long long i = 0; i < n; i+=1) {
        cin >> a;
        stuff[i] = a;
        total += a;
    }
    long long dif = total - k;
    if (dif == 0) {
        cout << 0;
    }
    else if (dif < 0) {
    cout << -1;}
    else {
    sort(stuff, stuff + n, greater<long long>());
    total = 0;

    bool found = false;
    for (long long i=0; i < n; i+=1) {
        total += stuff[i] - 1;
        if (total >= dif) {
            cout << i + 1;
            found = true;
            break;
        }}
    if (found == false) {
        cout << -1;
    }}}
    