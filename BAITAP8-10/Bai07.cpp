/*
Bài 7: Cho dãy số nguyên. Hãy chia dãy này thành nhiều đoạn nhất sao cho tổng các phần tử trong các đoạn bằng nhau.
Input:
+Dòng đầu ghi n (n≤100)
+Các dòng tiếp theo ghi a1, a2, ..., an	
Output:
+Dòng đầu tiên ghi K là số đoạn cần chia
+Dòng thứ hai ghi K số nguyên là chỉ số cuối cùng của K đoạn. 
Nếu có nhiều phương án thì in môt phương án bất kỳ. <- ?????????????????


*/
#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
    long long n, a;
    bool found = false;
    long long v[100000];
    cin >> n;
    for (long long i = 0; i < n; i += 1) {
        cin >> a;
        v[i] = a;
    }
    long long j = 0;
    long long total = 0,stotal = 0;
    long long idx[100000], count = 1;
    for (long long i = 0; i < n - 1; i += 1) {
        total += v[i];
        j = i + 1;
        idx[0] = i;
        stotal = 0;
        while (j < n) {
            stotal += v[j];
            if (stotal >= total) {
            if (total == stotal) {
                stotal = 0;
                idx[count] = j;
                count += 1;}
            else break;}
            j += 1;
        }
        if (j == n && stotal == 0) {
                cout << count << "\n";
            for (long long i = 0; i < count; i += 1) {
                cout << idx[i] + 1<< " ";
            }
            found = true;
            break;
        }
        count = 1;
    }
    if (!found) {cout << 1 << "\n";
    cout << n;}
}
