#include <iostream>
#include <stack>
using namespace std;
int main()
{
    char s[1000];
    int i = 1;
    while(1)
    {
        cin >> s[i];

        if(s[i] == ')')
            break;
            i++;
    }
    int n = i - 1;

     stack<int> p;

     for(int j = 1;j <= n;j++)
     {
         if(s[j] == '+' || s[j] == '-' || s[j] == '*' || s[j] == '/')
         {
             int a = p.top();
             cout << a << endl;
             p.pop();
             int b = p.top();
             cout << b << endl;
             p.pop();

             int c ;

             if(s[j] == '+')  c = b + a;

             if(s[j] == '-') c = b - a;

             if(s[j] == '*') c = b * a;

             if(s[j] == '/')   c = b / a;

             p.push(c);
         }
         else
         {
             int g = s[j] - '0';
             p.push(g);
         }
     }
     cout << p.top() << endl;
}
