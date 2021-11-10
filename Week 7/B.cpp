#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

string bin(string s, int n) {
	if (n / 2 == 0) return s + (char(n + 48));

	return bin(s + char(n % 2 + 48), n / 2);
}

int main() {

	int n;
	cin >> n;

	string res = bin("", n);

	reverse(res.begin(), res.end());

	cout << res;


	return 0;
}
