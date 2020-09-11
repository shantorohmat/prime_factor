#include <stdio.h>
int main()
{
    int m1,m2,p1,p2;

    scanf("%d %d",&m1,&p1);
    int sum1= m1+p1;
    scanf("%d %d",&m2,&p2);
    int sum2 = m2 +p2;
    if(sum1 > sum2)
    {
       printf("A\n");

    }
    else if(sum1 == sum2)
    {
        if(m1 > m2)
        {
            printf("A\n");
        }
        else if(m1 < m2)
            printf("B\n");
        else if(m1 == m2)
        {
            printf("Both\n");
        }
    }
    else if(sum1 < sum2)
    {
        printf("B\n");
    }

}

