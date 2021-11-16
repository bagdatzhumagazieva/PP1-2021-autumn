#include <bits/stdc++.h>

using namespace std;


int main(){

    set<int> v;

    int n, a;

    cin >> n;

    for(int i=0; i<n;i++){

         cin >> a;

         v.insert(a);
    }

    set<int>::iterator it;

    for (it = v.begin(); it != v.end(); ++it) {
    	int f = *it;
    	if (f % 2 == 0) continue;
        cout << f << " ";
	}

    return 0;

}

