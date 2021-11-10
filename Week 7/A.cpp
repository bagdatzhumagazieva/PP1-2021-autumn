#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int nthDegree(int n) {
	
	if (n == 0) return 1;

	return 2 * nthDegree(n - 1);
}

int main() {

	int n;
	cin >> n;

	cout << nthDegree(n);


	return 0;
}
