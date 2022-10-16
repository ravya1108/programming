#include <stdio.h>  
void func() {    
   static int i=0; //static variable    
   int j=0; //local variable    
   i++;    
   j++;    
   printf( "%d and %d\n",i,j);    
}    
int main()  
{  
 func();    
 func();    
 func();    
}  
