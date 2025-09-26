#include <stdio.h>
#include <string.h>

// prototype | files | pointeur | linkedList. mysql


typedef struct
{
    char cne[20];
    char nom[40];
    char prenom[40];
    float notes[4];
    float moyenne;
} Etudiant;
Etudiant classe[30];

int nbEtudiants = 0;

void ajouterEtudiant()
{
    printf("entre le CNE d etudiant %d :", nbEtudiants + 1);
    scanf("%s", &classe[nbEtudiants].cne);
    printf("entre le nom d etudiant %d :", nbEtudiants + 1);
    scanf("%s", &classe[nbEtudiants].nom);
    printf("entre le prenom d etudiant %d :", nbEtudiants + 1);
    scanf("%s", &classe[nbEtudiants].prenom);
}

void saisirNotes()
{
    char nom[30];
    printf("entre le nom d etudiant :");
    scanf("%s", &nom);
    int c = 0;
    for (int i = 0; i <= nbEtudiants; i++)
    {
        if (strcmp(classe[i].nom, nom) == 0)
        {
            for (int j = 0; j < 4; j++)
            {
                int n;
                printf("entre la note %d d etudiant %d :", j + 1, nbEtudiants);
                scanf("%f", &n);
                if (n >= 0 && n <= 20)
                {
                    classe[i].notes[j] = n;
                }
                else
                {
                    printf("entre la note co;pris entre 0 et 20 :\n");
                }
            }
            c = 1;
        }
    }
    if (c == 0)
    {
        printf("etudiant de  nom %s ne trouve:\n", nom);
    }
}
void affiche_etudiants()
{
    if (nbEtudiants > 0)
    {
        for (int i = 0; i < nbEtudiants; i++)
        {
            printf("le CNE d etudiant %d est  : %s \n", i + 1, classe[i].cne);
            printf("le nom d etudiant %d est  : %s \n", i + 1, classe[i].nom);
            printf("le prenom d etudiant %d est  : %s \n", i + 1, classe[i].prenom);
            printf("les notes d etudiant est :");
            printf("[");
            for (int j = 0; j < 4; j++)
            {
                printf(",%.2f", classe[i].notes[j]);
            }
            printf("]\n");
        }
    }
    else
    {
        printf("listes des etudiant et vide :\n");
    }
}
float calculerMoyenneEtudiant()
{
    affiche_etudiants();
    float somme = 0;
    for (int i = 0; i < nbEtudiants; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            somme += classe[i].notes[j];
        }
        classe[i].moyenne = somme / 4;
        somme = 0;
        printf("la moyenne  d etudiant %d est  : %.2f \n", i + 1, classe[i].moyenne);
    }
}

float calculerMoyenneGenerale()
{
    calculerMoyenneEtudiant();
    float mygenerale = 0;
    float somme = 0;
    for (int i = 0; i <= nbEtudiants; i++)
    {
        somme += classe[i].moyenne;
    }
    mygenerale = somme / nbEtudiants;
    printf("la moyenne generale de classe est :%.3f\n", mygenerale);
}
int main()
{
    int ch;
    do
    {
        printf("\t1) Ajouter un etudiant .\n");
        printf("\t2) Saisir les notes d un etudiant .\n");
        printf("\t3) Afficher tous les etudiants .\n");
        printf("\t4) Afficher bulletin d un etudiant .\n");
        printf("\t5) Calculer la moyenne generale .\n");
        printf("\t0) Quitter .\n");
        printf("\t\tentre le choix :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            ajouterEtudiant();
            nbEtudiants++;
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

    return 0;
}