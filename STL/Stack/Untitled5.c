#include <stdio.h>

int main()
{
    char s[100];
     scanf("%s", s);
    int c = 0;
    for(int i = 0;i < strlen(s);i++)
    {
        if(s[i] == '1')
        {
            c++;
        }
    }
    printf("%d",c);

}


