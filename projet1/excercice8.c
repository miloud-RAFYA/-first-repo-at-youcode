#include <stdio.h>
int main(){
    float  x;
    float d;
    float  r;
    printf("Entrez le montant du prêt :");
    scanf("%f",&x);
    printf("Entrez le taux d'intérêt :");
    scanf("%f",&d);
    printf("Entrez le paiement mensuel :");
    scanf("%f",&r);
    float mont=x*d+x;
    float dex=mont-r;
    float tr=dex-r;
    printf("Solde restant après le premier paiement :$ %f\n",mont);
    printf("Solde restant après le deuxième paiement :$%f\n",dex);
    printf("Solde restant après le troisième paiement : $%f\n",tr);
}