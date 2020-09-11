#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int>a;
    stack<int>b;
    stack<int>d[100];
    int s,n1,n2,n;

    cout << "Enter The First STACK Number of Element  : ";
    cin >> n1;

    cout << "Enter the element : " << endl;

    for(int i = 1;i <= n1;i++)
    {
        cin >> s;
        a.push(s);

    }

    cout << "Enter the Second STACK Number of element : " ;

    cin >> n2;

    cout << "Enter the element : " <<endl;

    for(int i = 1;i <= n2;i++)
    {
        cin >> s;
        b.push(s);

    }

    n = n1 + n2;

    for(int i = 1;i <= n1;i++)
    {
        int x = a.top();
        d[i].push(x);
        a.pop();
    }
    for(int i = n;i > n1;i--)
    {
        int x = b.top();
        d[i].push(x);
        b.pop();
    }

    cout << "STACK number three : " << endl;

    for(int i = 1;i <= n;i++)
    {
        int x = d[i].top();
        cout << x << " ";
        d[i].pop();
    }



}
