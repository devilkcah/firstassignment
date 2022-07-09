#include<stdio.h>
int main()
{
    int i,hm,a[10],count=0;
    printf("enter hour and minute");
    scanf("%d",&hm);
    for(i=0;hm!=0;i++)
    {
        a[i]=hm%10;
        hm=hm/10;
        count+=1;
    }
    printf("\n");
    printf("HH:");
    for(i=count-1;i>1;i--)
    {
     printf("%d",a[i]);
    }
    printf("and
           MM:");
    for(i=count-3;i>=0;i--)
    {
     printf("%d",a[i]);
    }
    return 0;
}
