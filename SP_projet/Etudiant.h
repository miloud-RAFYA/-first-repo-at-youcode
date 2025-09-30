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
int nbEtudiant=0;
void ajouterEtudiant(Etudiant **classe, int *nbEtudiant);
void saisirEtudiant();
void Af_Etudiant();
void List_Etudiant();
void mod_etudiant();
void Sup_Etudiant();
void trierEtudiants();
#endif