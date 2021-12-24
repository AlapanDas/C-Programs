#include <stdio.h>
int main()
{
    int t,a,b;
    printf("Enter number");
    scanf("%d",t);
    for (int i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        printf("%d",(a+b));
    }
}