#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

	string s;

	cin >> s;

	int upperCase = 0, lowerCase = 0;
	for (int i = 0; i < s.length(); i++) {
	    if (s[i] >= 65 && s[i] <= 90) {
	    	upperCase++;
	    } else if (s[i] >= 97 && s[i] <= 122) {
	    	lowerCase++;
	    }
	}

	cout << lowerCase << " " << upperCase;
	


	return 0;
}
