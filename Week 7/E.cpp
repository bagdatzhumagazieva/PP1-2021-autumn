#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int isDegree(int n) {
	if (n == 2 || n == 1) return true;

	if (n % 2 == 1) return false;

	return isDegree(n / 2); 
}

int main() {

	int n;
	cin >> n;

	if (isDegree(n)) {
		cout << "Yes";
	} else {
		cout << "No";
	}

	return 0;
}
