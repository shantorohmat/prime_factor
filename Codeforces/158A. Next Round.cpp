#include <iostream>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,x,c =  0;

    cin >> a >> b;

    int *p = new int [a];

    for(int i = 0;i  < a;i++)
    {
        cin >> p[i];

    }

    for(int i = 0;i < a;i++)
    {
        if(p[i] == 0) continue;
        if(p[i] >= p[b-1])
        {
            c++;
        }
    }

    cout << c << endl;
    delete[] p;
}
