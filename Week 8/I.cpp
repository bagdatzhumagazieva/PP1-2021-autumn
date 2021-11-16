#include <bits/stdc++.h>

using namespace std;


int main(){

    vector<int> v;

    int n, a;

    cin >> n;

    for(int i=0; i<n;i++){

         cin >> a;

         v.push_back(a);
    }

    int k;
    cin >> k;

    for(int j = 0; j < v.size(); j++){
        if (v[j] == k) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

    return 0;

}