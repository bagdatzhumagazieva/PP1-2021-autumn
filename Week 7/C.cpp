#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

bool binarySearch(int l, int r, int arr[100000], int x) {

	if (r >= l) {
		int mid = (r - l)/2 + l;

		if (arr[mid] == x) return true;
		if (arr[mid] < x) return binarySearch(mid + 1, r, arr, x);
		else return binarySearch(l, mid - 1, arr, x);
	}

	return false;
}

int main() {

	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i ++) {
		cin >> a[i];
	}
	
	int x;

	cin >> x;

	if (binarySearch(0, n, a, x) == true) {
		cout << "Yes";
	} else {
		cout << "No";
	}

	return 0;
}
