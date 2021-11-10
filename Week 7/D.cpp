#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int sum(string s) {
	if (s.length() == 0) return 0;

	return (s[s.length() - 1] - 48) + sum(s.substr(0, s.length() - 1));
}

int main() {

	string n;
	cin >> n;

	cout << sum(n);

	return 0;
}
