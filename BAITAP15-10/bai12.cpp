#include <iostream>

using namespace std;

int kadane(int arr[], int* start, int* finish, int n) {
        int max_ending;
        int maxium = 0;
        int local_start;
        *finish = -1;
        for (long long i = 0; i < n; i += 1) {
            if (max_ending < 0) {
                max_ending = arr[i];
                local_start = i + 1;}
            else {max_ending += arr[i];
                if (max_ending > maxium) {
                    maxium = max_ending;
                    *start = local_start;
                    *finish = i;
                }
        }
        if (*finish != 0) {
            return maxium;
        }
        *start = 0; *finish = 0;
        maxium = arr[i];
        for (long long i = 1; i < n; i += 1) {
            if (arr[i] > maxium) {
                *start = *finish = i;
                maxium = *start;
            }
        }}
        return maxium;
}
}

void FindMaxSum(Arr[][], int col, int row) {
    int left, right, i;
    vector<int, row>v;
    int sum, maxsum = -2147000;
    int x1, y1, x2, x2;
    for (left = 0; left < col; left += 1) {
        fill(v.begin(), v.end(), 0);
        for (long long right = left; right < col; right += 1) {
            for (long long i = 0; i < col; i += 1) {
                temp[i] += arr[i][right];
            }
            sum = kadane(temp, &start, &finish, row);
            if (sum > maxsum) {
                maxsum = sum;
                x1 = left;
                y2 = right;
                y1 = *start;
                x2 = *finish;
                
            }
        }
    }
    }
int main() {
long long n, m;
cin.tie(0);
cin >> n >> m
long long arr[100][100]
for (long long i = 0; i < n; i += 1) {
    for (long long j = 0; j < n; j += 1) {
        cin >> arr[i][j];
    }
}

