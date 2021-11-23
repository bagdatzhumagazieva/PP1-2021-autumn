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

    map<int, int> m; 

    for(int i = 0; i < n; i++)  
    {  
        cin >> x; 
        m[x]++;
    }
    
    map <int, int> :: iterator it;

    int cnt = 0;
    
    for(it = m.begin(); it != m.end(); it++)  {
        int a = (*it).second;
        if (a >= 2) cnt ++; 
    }  

    cout << cnt;
    return 0;  
  
}