#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

	string s;

	cin >> s;

	int resOdd = 0, resEven = 0;

	for (int i = 0; i < s.length(); i++) {

	    int n = s[i] - 48;

	    if (i % 2 == 0) {
	    	resOdd += n;
	    } else {
	    	resEven += n;
	    }
	}

	if (resEven == resOdd) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	


	return 0;
}
