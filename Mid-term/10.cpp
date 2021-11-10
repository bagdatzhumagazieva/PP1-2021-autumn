#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main() {

	int a[13];
	a[0] = 0;
	a[1] = 31;
	a[2] = 28;
	a[3] = 31;
	a[4] = 30;
	a[5] = 31;
	a[6] = 30;
	a[7] = 31;
	a[8] = 31;
	a[9] = 30;
	a[10] = 31;
	a[11] = 30;
	a[12] = 31;

	int m, d;
	cin >> m >> d;

	if (a[m] < d || d <= 0 || m <= 0 || m > 12) {
		cout << "Not correct";
	} else {
		int res = 0;
		for (int i = m; i <= 12; i++) {
			res += a[i];
		}
		cout << res - d + 1;
	}


	return 0;
}
