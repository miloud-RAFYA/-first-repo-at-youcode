#ifndef TRI_H
#define TRI_H
#include <string.h>
#include <stdio.h>
#include "Etudiant.h"

void trierEtudiants() {
    for (int i = 0; i < nbEtudiant - 1; i++) {
        for (int j = i + 1; j < nbEtudiant; j++) {
            if (classe[i].moyenne >classe[j].moyenne) {
                Etudiant tmp = classe[i];
                classe[i] = classe[j];
                classe[j] = tmp;
            }
        }
    }
    printf("Etudiants tries par la moyenne .\n");
}
void TR_etudiant(){
    for (int i = 0; i < nbEtudiant - 1; i++) {
        for (int j = i + 1; j < nbEtudiant; j++) {
            if (strcmp(classe[i].nom ,classe[j].nom)>0) {
                Etudiant tmp = classe[i];
                classe[i] = classe[j];
                classe[j] = tmp;
            }
        }
    }
    printf("Etudiants tries par la nom .\n");
}

#endif
