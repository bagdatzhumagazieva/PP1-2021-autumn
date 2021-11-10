#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

char f(char c) {
	return toupper(c);
}

int main() {

	char c;
	cin >> c;

	cout << f(c);

	return 0;
}
	