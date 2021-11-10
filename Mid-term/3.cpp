#include <bits/stdc++.h>
using namespace std;

string binary(long long n) {
  string s = "";

  long long t = n;
  long long res = 0;

  while (t!=0) {
    s += (t % 2 + 48);
    t = t / 2;
  }
  reverse(s.begin(), s.end());

  return s;
}

string reverseBinary(long long n) {
  string s = "";

  long long t = n;
  long long res = 0;

  while (t!=0) {
    s += (t % 2 + 48);
    t = t / 2;
  }

  return s;
}

int main( ){

    long long n; 
    cin >> n;
    
   if( reverseBinary(n) == binary(n) )
    cout << "It works!"; 
   else cout<<"Sad";
    
    return 0;
} 