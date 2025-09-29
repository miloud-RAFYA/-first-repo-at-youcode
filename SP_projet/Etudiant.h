#ifndef ETUDIANT_H
#define ETUDIANT_H
typedef struct{
    char cne[20];
    char nom[40];
    char prenom[40];
    float notes[4];
    float moyenne; 
}Etudiant;
Etudiant *classe;
int nbEtudiant;
#endif