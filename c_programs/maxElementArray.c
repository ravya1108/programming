#include <stdio.h>

int main() {
    
    int arr[10],max,i,n;
    
printf("Enter the number of elements of array :\n");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i = 0;i < n;i++) {
        scanf("%d",&arr[i]);

    }
    for(i = 0;i <n;i++) {
        if(arr[i] > arr[0]  ) 
            arr[0]= arr[i];
        
        
    }
 printf( "maximum is %d",arr[0]); 

return 0;


}