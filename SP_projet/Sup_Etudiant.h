#ifndef SUPPERIMER_H
#define SUPPERIMER_H 
#include <stdio.h>
#include <stdlib.h>
#include "Rech_Etudiant.h"
#include "Etudiant.h"

void Sup_Etudiant(){
char cne[40];
    printf("CNE de etudiant q supprimer: ");
    scanf("%s", cne);
    int rech = rech_Etudiant(cne);
    if (rech == -1) {
        printf("Etudiant introuvable.\n");
        return;
    }
    for (int i = rech; i < nbEtudiant - 1; i++) {
        classe[i] = classe[i + 1];
    }
    nbEtudiant--;
    classe=(Etudiant*)realloc(classe, nbEtudiant * sizeof(Etudiant));
    printf("Etudiant supprime.\n");
}



#endif