#include <stdio.h>
int main(){
    float x;
    float  r;
    printf("Entrez le no;bre x :");
    scanf("%f",&x);
    r=((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("Avec taxe ajoute : %3.f",r);
}