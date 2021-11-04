#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{

    long long row, col;
    cin >> row >> col;
    long long res = row * col;

    unordered_map <int, unordered_set<int> >m;
    long long arr[100][100];
    pair<int, int> p;
    long long start, finish;
    long long high;

    long long i, j;
    for (i = 0; i < row; i += 1) {
        for (j = 0; j < col; j += 1) {
            cin >> arr[i][j];
        }
    }
    int idx;

    for (j = 1; j < col - 1; j += 1) {
        high = -1;
        idx = 0;
        for (i = 0; i < row; i += 1) {
            if (arr[i][j] >= high) {
                high = arr[i][j];
                idx = i;
                m[i].insert(j);
            }
        }
        high = -1;
        for (i = row - 1; i > idx; i -= 1) {
            if (arr[i][j] >= high) {
                high = arr[i][j];
                m[i].insert(j);
            }
        }
    }

    for (i = 1; i < row - 1; i += 1) {
        high = -1;
        idx = 0;
        for (j = 0; j < col; j += 1) {
            if (arr[i][j] >= high) {
                high = arr[i][j];
                idx = j;
                m[i].insert(j);
            }
        }
        high = -1;
        for (j = col - 1; j > idx; j -= 1) {
            if (arr[i][j] >= high) {
                high = arr[i][j];
                m[i].insert(j);
            }
        }
    }
    
    unordered_map <int, unordered_set<int> >::iterator it;
    int total = 0;
    for (it = m.begin(); it != m.end(); it++)
    {
        total += it->second.size();  // string's value 
    }
    if (row > 2 && col > 2) cout << total + 4;
    else cout << row * col;
}
