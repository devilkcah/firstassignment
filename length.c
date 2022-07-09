#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,count=0;
    printf("enter the string whose length to be calculated:-");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf(" length of string %d",count);
}
