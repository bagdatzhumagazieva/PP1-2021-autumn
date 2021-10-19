#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

void f(int n, int m) {
	double res = (m * 100) / n;
	res = round(res * 1000) / 1000;

	cout << res;
}

int main() {

	int n, m;
	cin >> n >> m;

	f(n, m);

	return 0;
}
	