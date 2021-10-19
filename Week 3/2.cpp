#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n;

	cin >> n;
	int arr[n];

	int maxn = -1000000;

	for(int i = 0; i < n; i++) {
		cin >> arr[i];

		if (arr[i] > maxn) {
			maxn = arr[i];
		}
	}

	cout << maxn << endl;

	return 0;
}
