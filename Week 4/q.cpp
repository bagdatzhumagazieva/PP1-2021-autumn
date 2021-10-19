#include <iostream>
#include <cmath>

using namespace std;

int main() {

	string s, t;

	cin >> s >> t;

	bool check = true; 
	
	for (int i = 0; i < t.length(); i += s.length()) {
		if (t.substr(i, s.length()) != s) {
			check = false;
			break;
		}
	}

	if (check) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}
	