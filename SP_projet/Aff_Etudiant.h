#ifndef AFFICHER_H
#define AFFICHER_H
#include <stdio.h>
#include "etudiant.h"
#include "Rech_Etudiant.h"
void Af_Etudiant()
{   char CN[20];
    printf("entre le cne de etudiant qui tu veux affiche :");
    scanf("%s",CN);
    int rech=rech_Etudiant(CN);
    if (rech == -1)
    {
        printf("aucun etudiant \n");
        return;
    }
    else
    {
        printf("CNE    :%s\n",classe[rech].cne);
        printf("Nom    :%s\n",classe[rech].nom);
        printf("Prenom    :%s\n",classe[rech].prenom);
        printf("les notes    :[ ");
        for(int i=0;i<4;i++){
        printf("%.2f\t",classe[rech].notes);
        }
        printf("les notes    :]");
        printf("Moyenne    :%.2f",classe[rech].moyenne);
    }
}
#endif