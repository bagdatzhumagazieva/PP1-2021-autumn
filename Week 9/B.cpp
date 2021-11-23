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

    vector<int> vEven, vOdd; 
    
    for(int i = 0; i < n; i++)  
    {  
        cin >> x; 
        if (x % 2 == 0) {
            vEven.push_back(x);
        } else {
            vOdd.push_back(x);
        }
    }  
    
    sort(vEven.begin(), vEven.end());
    reverse(vEven.begin(), vEven.end());
    sort(vOdd.begin(), vOdd.end());

    vector<int> :: iterator it;

    for(it = vEven.begin(); it != vEven.end(); it++)  {
        cout << (*it) << " ";
    } 

    for(it = vOdd.begin(); it != vOdd.end(); it++)  {
        cout << (*it) << " ";
    }  

    return 0;  
  
}