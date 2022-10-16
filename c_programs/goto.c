#include <stdio.h>
int main()
{
    int age;
ineligible:

    printf("Enter your age :\n");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You are ineligible ...\n");
        goto ineligible;
    }
    else
    {
        printf("You are eligible.");
    }
    return 0;
}