#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0,j=1,n,z;
    printf("first 10 numbers of fibonacci series are:");
    printf("%d %d ",i,j);
    for(n=3;n<=10;n++)
    {
        z=i+j;
        printf("%d ",z); 
        i=j;
        j=z;
    }
    getch();
}