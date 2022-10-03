#include<stdio.h>
void main()
{
    int a,b;
    printf("enter values for a and b:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped values are a=%d and b=%d",a,b);
}