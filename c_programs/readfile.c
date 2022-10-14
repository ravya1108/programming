#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("./number.txt","r")) == NULL){
       printf("can not open file");
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("%d \n", num);
   fclose(fptr); 
  
   return 0;
}
