#include <iostream>
using namespace std;

int main()
{
    int n,x = 0;

    cin >> n;

    while(n--)
    {
        char s[3];

        cin >> s[0] >> s[1] >> s[2];

        if((s[0] == '+' && s[1] == '+') || (s[1] == '+' && s[2] == '+'))
        {
            x++;
        }
        else x--;


    }
        cout << x << endl;

}
