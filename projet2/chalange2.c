#include <stdio.h>
int main(){
        int n;
        int v=0;
        printf("entrer un nemuro :");
        scanf("%d",&n);
        int s=n;
        do{
           v=(v*10)+(n%10);
           n=n/10;
        }while(n!=0);
        printf("inverse de nemuro %d :%d",s,v);
 
    return 0;
}