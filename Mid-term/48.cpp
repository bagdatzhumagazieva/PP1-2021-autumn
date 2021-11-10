#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

		string s;

		while(getline(cin, s)) {
			string t = "";
			s += ' ';
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == ' ') {
					cout << t << endl;
					t = "";
					continue;
				}
				if ((s[i] >= 48 && s[i] <= 57)) continue;
				 t += s[i];
			}
		}

	return 0;
}