#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,c = 0;
    cin >> a;

    if(a == 2) cout << "NO" << endl;
    else if(a % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
