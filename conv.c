#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n=12.5;
    char nt[20];         
    
    sprintf(nt, "%.2f",n);
    printf("%s",nt);

   return 0;
}