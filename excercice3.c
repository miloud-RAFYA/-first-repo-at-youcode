#include <stdio.h>
int main(){
    float const p=3.14;
    float r;
    printf("entre le rayon de sphere :");
    scanf("%f",&r);
    float v=(4.0/3.0)*p*r*r*r;
    printf("%f",v);
}