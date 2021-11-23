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

    sort(v.begin(), v.end());

    int sum  = 0;
    for (int i = n - 1; i >= n - k; i--) {
        sum += v[i];
    }

    cout << sum;

    return 0;

}

