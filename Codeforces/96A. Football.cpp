#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;

    getline(cin,s);

    int d = s.size();

    int c = 0,k = 0,x = 0;

    for(int i = 0;i < d;i++)
    {
        if(k == 1) break;

        else if(k = 0){
        if(s[i] == 1)
        {
            c =0;
            for(int j = i;j< d;j++)
            {
                if(s[j] == 1)
                    c++;
                 else break;
            }
            if(c == 7)
            {
                k = 1;
            }
        }

        }
        else
        {
            if(k == 0){
            x = 0;
            for(int j = i;j < d;j++)
            {
                if(s[j] == 0)
                {
                    x++;
                }
                else break;
            }
            if(x == 7)
                k =1;
            }

        }
    }
    if(k == 1) cout << "YES" << endl;
    else cout << "NO" << endl;



}
