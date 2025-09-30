#ifndef LIS_Etudiant_H
#define LIS_Etudiant_H
#include <stdio.h>
#include <stdlib.h>
#include "Etudiant.h"
void List_Etudiant(){
if ( nbEtudiant== 0)
    {
        printf("aucun etudiant \n");
        return;
    }
    else
{   
    int som=0;
    for(int i=0;i<nbEtudiant;i++){
        printf("CNE    :%s\n",classe[i].cne);
        printf("Nom    :%s\n",classe[i].nom);
        printf("Prenom    :%s\n",classe[i].prenom);
        printf("les notes    :[ ");
        for(int i=0;i<4;i++){
        printf("%.2f\t",classe[i].notes[i]);
        }
        printf("]");
        printf("Moyenne    :%.2f\n",classe[i].moyenne);
        som+=classe[i].moyenne;
    }
    printf("la moyenne generale de classe est : %f\n",som/nbEtudiant+1);
        
}
}

#endif