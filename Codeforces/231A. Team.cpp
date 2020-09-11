#include <iostream>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,a,b,c,d = 0;

    cin >> n;

    while(n--)
    {
        cin >> a >> b >> c;

        if((a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1) || (a == 1 && b == 1 && c == 1))
        {
            d++;
        }
    }
    cout << d << endl;

    return 0;
}
