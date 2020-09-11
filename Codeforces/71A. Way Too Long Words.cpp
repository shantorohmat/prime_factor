#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;
    while(n--){

    char s[103];

    cin >> s;

    int l = strlen(s);

    if(l <= 10)
    {
        cout << s << endl;
    }
    else
    {
        cout << s[0] << l - 2 << s[l-1] << endl;
    }
    }
    return 0;
}
