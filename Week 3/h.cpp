#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n, l, r;

	cin >> n >> l >> r;
	int a[n];
	long sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if ((i + 1) >= l && (i + 1) <= r) {
			sum += a[i];
		}
	}

	cout << sum;

	return 0;
}
