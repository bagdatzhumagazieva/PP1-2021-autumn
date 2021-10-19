#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

	string s, t;

	cin >> s >> t;

	int res = 0;

	for (int i = 0; i < s.length(); i++) {
	    if (s.substr(i, t.length()) == t) {
	        res ++;
	        break;
	    }
	}
	if (res > 0) {
	    cout << "YES";
	} else {
	    cout << "NO";
	}


	return 0;
}
