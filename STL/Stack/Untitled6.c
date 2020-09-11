 #include <stdio.h>
 int main(){
    int n;
    scanf("%d",&n);
    printf("\n");
    getchar(s);
    int c = 0;
    for(int i = 0;i < strlen(s);i++)
    {
        if(s[i] == '+')
        {
            c++;
        }
        else if(s[i] == '-')
        {
            c--;
        }
    }
    scanf("%d",c);
 }
