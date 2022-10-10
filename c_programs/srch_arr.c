#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,j,z,count=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&z);
    for(j=0;j<n;j++)
    {
        if (z==a[j])
        {
        printf("%d is present in the entered array",z);
        count=1;
        }
    }
    if (count!=1)
    printf("%d is not present in the entered array",z);
    getch();
}