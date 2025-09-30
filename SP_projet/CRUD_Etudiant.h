#ifndef AFFICHER_H
#define AFFICHER_H
#include <stdio.h>
#include <stdlib.h>
#include "Etudiant.h"
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
        printf("%.2f\t",classe[rech].notes[i]);
        }
        printf("]");
        printf("Moyenne    :%.2f\n",classe[rech].moyenne);
    }
}

void mod_etudiant(){
    char CN[10];
    printf("entre le CNE de etudiant :");
    scanf("%s",&CN);
    int rech=rech_Etudiant(CN);
    if(rech==-1){
        printf("etudaint non trouvable \n");
        return;
    }else{
        float som=0;
        printf("entre les modification pour ce etudaint :");
        printf("CNE    :");
        scanf("%s",classe[rech].cne);
        printf("Nom    :");
         scanf("%s",classe[rech].nom);
        printf("Prenom    :");
         scanf("%s",classe[rech].prenom);
        for(int i=0;i<4;i++){
            printf("Note    %.2f:",i+1);
            scanf("%f",&classe[rech].notes[i]);
            som+=classe[rech].notes[i];
        }   
        classe[rech].moyenne=som/4;
    }

}
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
void ajouterEtudiant(Etudiant **classe, int *nb)
{
    *classe = (Etudiant *)realloc(*classe, (*nb + 1) * sizeof(Etudiant));
    if (*classe == NULL)
    {
        printf("un probleme pour cree un autre etudiant :.\n");
       return;
    }
    printf("\tEntrez le CNE de etudiant %d : ", *nb + 1);
    scanf("%s", (*classe)[*nb].cne);
    printf("\tEntrez le nom de etudiant %d : ", *nb + 1);
    scanf("%s", (*classe)[*nb].nom);
    printf("\tEntrez le prenom de etudiant %d : ", *nb + 1);
    scanf("%s", (*classe)[*nb].prenom);
     
    (*nb)++;

}
void saisirEtudiant(){
    char CN[20];
    printf("entre le CNE de etudiant pour saisir les notes :");
    scanf("%s",&CN);
     int rech=rech_Etudiant(CN);
     if(rech==-1){
        printf("etudiant ne est pas trouve .\n");
     }else{
         float som=0;
         printf("\t\tentre les notes    :\n");
         for (int i = 0; i < 4; i++)
         {
             printf("\tla note     %d:", i + 1);
             scanf("%f",&classe[rech].notes[i]);
             som += classe[rech].notes[i];
         }

         classe[rech].moyenne =som/4;
     }
}
#endif