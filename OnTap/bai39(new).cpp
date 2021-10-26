#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string change(string a) {
	ostringstream convert;
	stringstream ss;
	ss << a[0];
	long long number, b;
	ss >> number;
	for (long long i = 1; i < a.length(); i += 1) {
		ss.clear();
		ss << a[i];
		ss >> b;
		number *= b;
	}
	convert << number;
	return convert.str();

}

int main() {
	string a;
	cin >> a;
	int time = 0;
	while (a.length() != 1) {
		a = change(a);
		time += 1;
	}
	cout << time;
}
