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

    int l, r;
    cin >> l >> r;

    for (int i = l; i <= r; i ++) {
        v2.push_back(v[i]);
    }

    reverse(v2.begin(), v2.end());

    for(int j = 0; j < l; j++){
        cout<<v[j]<<" ";
    }

    for(int j = 0; j < v2.size(); j++){
        cout<<v2[j]<<" ";
    }

    for(int j = r + 1; j < n; j++){
        cout<<v[j]<<" ";
    }

    return 0;

}