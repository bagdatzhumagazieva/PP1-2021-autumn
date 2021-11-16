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

    cout << v.size();

    return 0;

}

