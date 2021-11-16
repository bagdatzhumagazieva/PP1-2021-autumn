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

    int k, x;
    cin >> k >> x;

    v.insert(v.begin() + k, x);

    for(int j = 0; j < v.size(); j++){
        cout<<v[j]<<" ";
    }

    return 0;

}