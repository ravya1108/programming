#include<stdio.h>

int main()
{
    
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements in the array\n");
    for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);


    int x;
    printf("Enter element to search in the array\n");
    scanf("%d",&x);

    int flag = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("number is found\n");
    else
        printf("number is not found\n");


    return 0;
}