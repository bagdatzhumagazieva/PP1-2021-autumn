#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;
	int a[n][m];

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			double res = sqrt(a[i][j]);
			if (res == floor(res)) {
				cout << res << " ";
			} else {
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
	