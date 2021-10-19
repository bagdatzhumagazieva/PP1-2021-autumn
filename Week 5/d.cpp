#include <iostream> 
#include <string> 
 
using namespace std; 
 
int main() { 
    string s, p = "";
     
    cin >> s;

    for (int i = s.size() - 1; i >= 0; i--) { 
        p += s[i]; 
    } 
    cout << p << endl; 
    if (p == s)  
        cout << "YES"; 
    else  
        cout << "NO"; 
    return 0; 
}