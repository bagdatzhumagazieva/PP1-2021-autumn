#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n;

	cin >> n;
	int a[n];

	int maxN = -1000000;
	int minN = 1000000;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxN) {
			maxN = a[i];
		}
		if (a[i] < minN) {
			minN = a[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == maxN) {
			cout << minN << " ";
		} else {
			cout << a[i] << " ";
		}
	}

	return 0;
}
