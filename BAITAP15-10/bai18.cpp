#include <iostream>
#include <iterator>
#include <set>
#include <utility>
using namespace std;

int main()
{
    set< pair <int, int> > s;
    pair<int, int> x;
    long long n;
    cin >> n;
    long long x1, x2, y1, y2;
    long long i, j, k;
    for (i = 0; i < n; i += 1) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (j = x1; j < x2; j += 1) {
            for (k = y1; k < y2; k += 1) {
                x = make_pair(j, k);
                s.insert(x);
            }
        }
    }
    cout << s.size();
}
