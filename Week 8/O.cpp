#include <bits/stdc++.h>

using namespace std;


int main(){

    set<char> v;

    string s;

    cin >> s;

    for(int i = 0; i < s.length(); i++){

        if(s[i] >= 65 && s[i] <= 90) {
             v.insert(s[i] + 32);
        } else {
             v.insert(s[i]);
        }
    }

    set<char>::iterator it;

    cout << v.size() << endl;

    for (it = v.begin(); it != v.end(); ++it) {
    	char f = *it;
        cout << f << " ";
	}

    return 0;

}

