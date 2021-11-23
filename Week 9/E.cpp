#include <iostream>  
#include <map>  
#include <vector>  
#include <algorithm>  
#include <list>  
using namespace std;  
int main()  
{  
    int n, x, y;  
    cin >> n;  

    map<string, int> m; 
    string s;

    for(int i = 0; i < n; i++)  
    {  
        cin >> s; 
        m[s]++;
    }
    
    map <string, int> :: iterator it;

    int cnt = 0;
    
    for(it = m.begin(); it != m.end(); it++)  {
        int a = (*it).second;
        if (a == 3) cnt ++; 
    }  

    cout << cnt;

    return 0;  
  
}