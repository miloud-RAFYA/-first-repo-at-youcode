#include <stdio.h>
int main(){
    float x;
    float  r;
    printf("Entrez le no;bre x :");
    scanf("%f",&x);
    r=3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+(7*x)-6;
    printf("Avec taxe ajoute : %3.f",r);
}