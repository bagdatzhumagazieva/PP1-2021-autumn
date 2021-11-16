#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x) {
    if (x == 1 || x == 2) return true;

    for(int i = 2; i <= sqrt(x); i ++) {
        if (x % i == 0) return false;
    }

    return true;
}

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

    int res = 0;

    for(int j = 0; j < v.size(); j++){
        if (v[j] >= k && isPrime(v[j])) {
            res ++;
        }
    }

    cout << res;

    return 0;

}