#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	freopen("INP.txt", "r", stdin);
	freopen("OUT.txt", "w", stdout);
	long long n;
	cin >> n;
	long long total = 0;
	long long first = 1, last = 1;
	
	while (total != n) {
		if (total < n) {
			total += last;
			last += 1;
		}
		else if (total > n) {
			total -= first;
			first += 1;
		}

	}
	cout << n << "=" << first << "+...+" << last-1;
	
}
