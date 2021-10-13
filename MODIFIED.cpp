/* http://lequydon.ntucoder.net/Problem/Details/6366
Ami có một dãy số A gồm n phần tử, được đánh số từ 1, phần tử thứ i của dãy số được kí hiệu là Ai. Ami có thể thực hiện thao tác sau với số lần bất kỳ : chọn một số Ai mà giá trị hiện tại lớn hơn 1 và trừ số này đi 1 đơn vị. Nếu số Ai đã bị trừ ít nhất một đơn vị, ta gọi số này đã bị biến đổi.

Bây giờ, Ami cần tìm cách thực hiện thao tác sao cho số phần tử bị biến đổi là ít nhất, và tổng các phần từ sau khi thực hiện một số thao tác đúng bằng k.

Input

Dòng đầu tiên chứa 2 số nguyên dương n và k lần lượt là số phần tử, và tổng (n ≤ 105 , k ≤ 1016).

Dòng tiếp theo chứa n số nguyên dương Ai là các phần tử dãy A (Ai ≤ 109).

Output:

Một số nguyên là số phần tử ít nhất bị biến đổi. Nếu không tồn tại bất kỳ cách thực hiện thao nào để tổng bằng k, in ra -1
*/

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
    