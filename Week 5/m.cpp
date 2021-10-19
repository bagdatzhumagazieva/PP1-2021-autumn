#include <iostream>
#include <algorithm>

using namespace std;

int main()

{
	string s;
	char c;
	int n;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'z') {
			cout << 'a';
		} else {
 			cout << char(s[i] + 1);
		}
	}

	
	return 0;
}
