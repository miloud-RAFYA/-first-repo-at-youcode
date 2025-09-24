#include <stdio.h>
int main(){
    int  x;
    int  r;
    printf("Entrez un montant en dollars :");
    scanf("%d",&x);
    printf("Billets de 20$ :%d\n",x/20);
    r=x%20;
    printf("Billets de 10$ :%d\n",r/10);
    int d=r%10;
    printf("Billets de 5$ :%d\n",d/5);
    int c=d%5;
    printf("Billets de 1$ :%d\n",c/1);
}