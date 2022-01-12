#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  	freopen("p49.inp", "r" ,stdin);
    freopen("p49.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, n1, idx, last_idx;
    cin >> n;
    long long arr[100000];
    bool first = true;
    for (long long i = 0; i < n; i += 1) {
        cin >> arr[i];
    }
    for (long long i = 1; i < n; i += 1) {
        if (arr[i] < arr[i - 1]) {
            if (first == true) {
            first = false;
            idx = i - 1;
            for (;i < n && arr[i - 1] >= arr[i] ; i += 1);
            last_idx = i - 1;
            if ((idx != 0 && arr[last_idx] < arr[idx - 1]) || (last_idx != (n - 1) && arr[idx] > arr[last_idx + 1]))
                {cout << "no"; return 0;}}
            else {cout << "no";
            return 0;}
        }
    }
    if (first) {cout << "yes" << "\n" << 1 << " " << 1;}
    else cout << "yes" << "\n" << idx + 1<< " " << last_idx + 1;}


