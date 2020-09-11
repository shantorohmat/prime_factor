#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> s;
    int a = 25,b = 50;

    s.push(a);
        s.push(5);

    s.push(b - 3);
        s.push(15);

    s.push(a*b);

    while(!s.empty())
    {
        int x = s.top();
        cout << x << endl;
        s.pop();
    }

    return 0;
}

