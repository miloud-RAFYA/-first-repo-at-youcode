#ifndef AFFICHER_H
#define AFFICHER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Etudiant.h"
#include "Rech_Etudiant.h"

void ajouterEtudiant(Etudiant **classe, int *nb)
{
    *classe = (Etudiant *)realloc(*classe, (*nb + 1) * sizeof(Etudiant));
    if (*classe == NULL)
    {
        printf("un probleme pour cree un autre etudiant :.\n");
       return;
    }
    printf("Entrez le CNE de etudiant %d : ", *nb + 1);
    scanf("%s", (*classe)[*nb].cne);
    printf("Entrez le nom de etudiant %d : ", *nb + 1);
    scanf("%s", (*classe)[*nb].nom);
    printf("Entrez le prenom de etudiant %d : ", *nb + 1);
    scanf("%s", (*classe)[*nb].prenom);
    (*nb)++;
}
#endif