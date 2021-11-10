#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

string binary(int n) {
	string s = "";

	int t = n;
	long long res = 0;

	while (t!=0) {
		s += (t % 2 + '0');
		t = t / 2;
	}

	reverse(s.begin(), s.end());

	return s;
}

long long binaryCount1(long long n) {
	long long t = n;
	long long res = 0;

	while (t!=0) {
		if (t % 2 == 1) res ++;
		t = t / 2;
	}

	return res;
}

long long binaryCount0(long long n) {
	long long t = n;
	long long res = 0;

	while (t!=0) {
		if (t % 2 == 0) res ++;
		t = t / 2;
	}

	return res;
}

int main() {

	int n;
	cin >> n;

	cout << binary(n) << endl << "zeros " << binaryCount0(n) << endl << "number of units " << binaryCount1(n);

	return 0;
}