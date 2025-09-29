#ifndef RECHERCHE_H
#define RECHERCHE_H
#include <string.h>
#include "etudiant.h"
int rech_Etudiant(char *cne){
    for(int i=0;i<nbEtudiant;i++){
         if (strcmp(classe[i].cne, cne) == 0)
            return i;
    }
    return -1;
}
#endif