#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n;

	cin >> n;
	int arr[n];

	int maxIndex = -1000000;
	int maxn =  -1000000;

	for(int i = 0; i < n; i++) {
		cin >> arr[i];

		if (arr[i] > maxn) {
			maxn = arr[i];
			maxIndex = i + 1;
		}
	}

	cout << maxIndex << endl;

	return 0;
}
