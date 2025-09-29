#include <stdio.h>
#include <stdlib.h>
#include "Aj_Etudiant.h"
#include "Rech_Etudiant.h"
#include "Aff_Etudiant.h"
#include "Mod_Etudiant.h"
#include "Sup_Etudiant.h"
#include "Tri_Etudiant.h"

int main() {
    int choix;
    classe = NULL;
    nbEtudiant = 0;

    do {
        printf("1) Ajouter\n");
        printf("2) Afficher\n");
        printf("3) Modifier\n");
        printf("4) Supprimer\n");
        printf("5) Trier\n");
        printf("0) Quitter\n");
        printf("Choix: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: 
            ajouterEtudiant(&classe, &nbEtudiant); 
            break;
            case 2:
             Af_Etudiant(); 
             break;
            case 3: 
            mod_etudiant();
             break;
            case 4:
             Sup_Etudiant(); 
             break;
            case 5: 
            trierEtudiants();
             break;
        }
    } while (choix != 0);

    free(classe);
    return 0;
}
