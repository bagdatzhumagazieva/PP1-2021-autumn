#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

	string s;
	int l, r;

	cin >> s >> l >> r;

	string res = s.substr(l, r - l + 1);

	
	cout << res;
	

	return 0;
}
