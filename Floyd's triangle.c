// FLOYD'S TRIANGLE 
// Enter the size: 5
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10       
// 11 12 13 14 15 

#include <stdio.h>

int main()
{
    int size, i, j,count=1;
    printf("Enter the size: ";
    cin >> size;

    for(i=1;i<=size;i++)
    {
        for(j=1;j<=i;j++)
        {
          printf("%d",count);
           printf(" ");
            count++;
        }
        printf("\n");
    }
    return 0;

}
