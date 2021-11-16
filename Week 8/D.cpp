#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v;
    vector<int> v2;

    int n, a;

    cin >> n;

    for(int i=0; i<n;i++){
         cin >> a;
         v.push_back(a);
    }

    int k;
    cin >> k;

    v.erase(v.begin() + k);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;

}