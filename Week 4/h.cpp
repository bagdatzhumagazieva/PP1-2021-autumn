#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;
	int a[n][m];

	int minSum = 1000000;
	int indexMinSum = 0;

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			sum += a[i][j];
		}
		if (sum < minSum) {
			minSum = sum;
			indexMinSum = i + 1;
		}
	}

	cout << indexMinSum;

	return 0;
}
	