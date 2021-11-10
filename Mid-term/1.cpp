#include <iostream>
#include <cmath>

using namespace std;

long long binaryCount1(long long n) {
	long long t = n;
	long long res = 0;

	while (t!=0) {
		if (t % 2 == 1) res ++;
		t = t / 2;
	}

	return res;
}

int main() {

	long long n;
	cin >> n;

	for (long long i = 0; i <= n; i++) {
		cout << binaryCount1(i);
	}

	return 0;
}