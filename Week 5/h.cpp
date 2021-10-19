#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

	string s;

	cin >> s;

	int a[11];

	for (int i = 0; i <= 10; i++) {
		a[i] = 0;
	}

	for (int i = 0; i < s.length(); i++) {
		int index = s[i] - 48;
		a[index] = a[index] + 1;
	}

	int res = 0;
	for (int i = 0; i <= 10; i++) {
		if (a[i] != 0) {
			res = a[i];
			break;
		}
	}

	for (int i = 0; i <= 10; i++) {
		if (a[i] != 0 && res != a[i]) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	

	return 0;
}
