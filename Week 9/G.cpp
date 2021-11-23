#include <iostream>  
#include <stack>  
#include <vector>  
#include <algorithm>  
#include <list>  
using namespace std;  
int main()  
{  
    string s;
    cin >> s;  

    stack<char> que; 

    for(int i = s.size() - 1; i >= 0; i--)  
    {  
        if (s[i] == '1' && !que.empty() && que.top() == '1') {
            que.pop();
        } else {
            que.push(s[i]);            
        }
    }

    string res;

     while (!que.empty())
      {
        res = res + que.top();
        que.pop();
      }
      cout << res;

    return 0;  
  
}
