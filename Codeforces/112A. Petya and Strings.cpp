#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <locale>
using namespace std;
int main()
{
    string s,p;

   getline(cin,s);

   getline(cin,p);

   for(int i = 0;i < s.size();i++)
   {
       if(s[i] >= 65 && s[i] <= 90)
       {
           s[i] = s[i] + 32;
       }
       //cout << s[i] << " ";
   }
  // cout << endl;

   for(int i = 0;i < p.size();i++)
   {
       if(p[i] >= 65 && p[i] <= 90)
       {
           p[i] = p[i] + 32;
       }
      // cout << p[i] << " ";
   }
  // cout << endl;

   if(s < p)
   {
       cout << -1 << endl;
   }
   else if(s > p)
   {
       cout << 1 << endl;
   }
   else cout << 0 << endl;
}
