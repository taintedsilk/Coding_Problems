#include<bits/stdc++.h>

using namespace std;

int arr[100000];
int main() {
  	freopen("INP.txt", "r", stdin);
	freopen("OUT.txt", "w", stdout);
    int n;
    cin >> n;
    for (int i = 0;i < n; i += 1) {
        cin >> arr[i];
    }
    int m = *max_element(arr, arr + n);
    int c;
    int ma = 1;
    int j;
    for (int i = 2; i < m; i += 1) {
        c = 0;
        j = 0;
        while (j != n) {
            if (arr[j] % i == 0) {c += 1;}
            else c = 0;
            ma = max(ma, c);
            j += 1;
        }
    }
    cout << ma;
 }
