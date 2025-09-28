#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// prototype | files | pointeur | linkedList. mysql
typedef struct {
    char cne[20];
    char nom[40];
    char prenom[40];
    float notes[4];
    float moyenne;
} Etudiant;

Etudiant* classe = NULL;
int nbEtudiants = 0;

void ajouterEtudiant(Etudiant** classe, int* nb);
float note(int j, Etudiant* e);
int rech(char* nom);
void saisirNotes();
void affiche_etudiants();
float calculerMoyenneEtudiant();
float calculerMoyenneGenerale();

int main() {
    int ch;
    do {
        printf("\n\t1) Ajouter un etudiant .\n");
        printf("\t2) Saisir les notes un etudiant .\n");
        printf("\t3) Afficher tous les etudiants .\n");
        printf("\t4) Afficher bulletin des etudiants .\n");
        printf("\t5) Calculer la moyenne generale .\n");
        printf("\t0) Quitter .\n");
        printf("\t\tEntrez votre choix : ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                ajouterEtudiant(&classe, &nbEtudiants);
                break;
            case 2:
                saisirNotes();
                break;
            case 3:
                affiche_etudiants();
                break;
            case 4:
                calculerMoyenneEtudiant();
                break;
            case 5:
                calculerMoyenneGenerale();
                break;
        }
    } while (ch != 0);

    free(classe); 
    return 0;
}

void ajouterEtudiant(Etudiant** classe, int* nb) {
    *classe = (Etudiant*) realloc(*classe, (*nb + 1) * sizeof(Etudiant));
    if (*classe == NULL) {
        printf("un probleme pour cree un autre etudiant :.\n");
        exit(1);
    }
    printf("Entrez le CNE de etudiant %d : ", *nb + 1);
    scanf("%s", (*classe)[*nb].cne);
    printf("Entrez le nom de etudiant %d : ", *nb + 1);
    scanf("%s", (*classe)[*nb].nom);
    printf("Entrez le prenom de etudiant %d : ", *nb + 1);
    scanf("%s", (*classe)[*nb].prenom);
    (*nb)++;
}

float note(int j, Etudiant* e) {
    float n;
    printf("Entrez la note %d de etudiant %s : ", j + 1, e->nom);
    scanf("%f", &n);
    while (n < 0 || n > 20) {
        printf("Entrez une note entre 0 et 20 : ");
        scanf("%f", &n);
    }
    return n;
}

int rech(char* _nom) {
    for (int i = 0; i < nbEtudiants; i++) {
        if (strcmp(classe[i].nom, _nom) == 0) {
            return i;
        }
    }
    return -1;
}

void saisirNotes() {
    char nom[30];
    printf("Entrez le nom de l etudiant : ");
    scanf("%s", nom);
    int c = rech(nom);
    if (c > -1) {
        for (int j = 0; j < 4; j++) {
            float n = note(j, &classe[c]);
            classe[c].notes[j] = n;
        }
    } else {
        printf("etudiant avec le nom %s introuvable.\n", nom);
    }
}

void affiche_etudiants() {
    if (nbEtudiants > 0) {
        for (int i = 0; i < nbEtudiants; i++) {
            printf("\nEtudiant %d :\n", i + 1);
            printf("  CNE     : %s\n", classe[i].cne);
            printf("  Nom     : %s\n", classe[i].nom);
            printf("  Prenom  : %s\n", classe[i].prenom);
            printf("  Notes   : [");
            for (int j = 0; j < 4; j++) {
                printf("%.2f ", classe[i].notes[j]);
            }
            printf("]\n");
        }
    } else {
        printf("La liste des étudiants est vide.\n");
    }
}

float calculerMoyenneEtudiant() {
    affiche_etudiants();
    float somme = 0;
    for (int i = 0; i < nbEtudiants; i++) {
        for (int j = 0; j < 4; j++) {
            somme += classe[i].notes[j];
        }
        classe[i].moyenne = somme / 4;
        somme = 0;
        printf("Moyenne de %s  est : %.2f\n", classe[i].nom, classe[i].moyenne);
    }
    return 0;
}

float calculerMoyenneGenerale() {
    calculerMoyenneEtudiant(); 
    float total = 0;
    for (int i = 0; i < nbEtudiants; i++) {
        total += classe[i].moyenne;
    }
    float mg = nbEtudiants > 0 ? total / nbEtudiants : 0;
    printf("Moyenne generale de la classe : %.2f\n", mg);
    return mg;
}
