#include<stdio.h>
#include<conio.h>
void main()
{
    int m,p,n,rev=0;
    printf("Enter a number");
    scanf("%d",&n);
    p=n;
    while(n!=0);
    {
        m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    if (p==rev)
    {
        printf("Palindrome nunmber!");
    }
    else
    {
        printf("Not a Palindrome number");
    }
    getch();
}