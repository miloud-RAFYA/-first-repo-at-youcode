#include <stdio.h>
int main(){
    float mont;
    float const r=0.05;
    printf("Entrez un montant :");
    scanf("%f",&mont);
    float tct=(mont*r)+mont;
  
    printf("Avec taxe ajoute : %3.f",tct);
}