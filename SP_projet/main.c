#include <stdio.h>
#include <stdlib.h>
#include "Etudiant.h"
#include "CRUD_Etudiant.h"
#include "Lis_Etudiant.h"
#include "Rech_Etudiant.h"
#include "Tri_Etudiant.h"
int main() {
    int choix;
    classe = NULL;
    nbEtudiant = 0;

    do {
        printf("\t\t1) Ajouter\n");
        printf("\t\t2) Saisir les notes \n");
        printf("\t\t3) Afficher le bultin\n");
        printf("\t\t4) Afficher tous les etudiant\n");
        printf("\t\t5) Modifier\n");
        printf("\t\t6) Supprimer\n");
        printf("\t\t7) Trier par moyenne\n");
        printf("\t\t7) Trier par nom\n");
        printf("\t\t0) Quitter\n\n");
        printf("\t\t\tChoix: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: 
            ajouterEtudiant(&classe, &nbEtudiant); 
            break;
            case 2:
             saisirEtudiant(); 
             break;
              case 3:
             Af_Etudiant(); 
             break;
            case 4:
              List_Etudiant(); 
             break;
            case 5: 
            mod_etudiant();
             break;
            case 6:
             Sup_Etudiant(); 
             break;
            case 7: 
            trierEtudiants();
             break;
            case 8:
             TR_etudiant();
             break;
        }
    } while (choix != 0);

    free(classe);
    return 0;
}
