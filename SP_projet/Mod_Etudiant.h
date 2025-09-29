#ifndef MODIFIER_H
#define MODIFIER_H
#include <stdio.h>
#include "Rech_Etudiant.h"
void mod_etudiant(){
    char CN[10];
    printf("entre le CNE de etudiant :");
    scanf("%s",&CN);
    int rech=rech_Etudiant(CN);
    if(rech==-1){
        printf("etudaint non trouvable \n");
        return;
    }else{
        int som=0;
        printf("entre les modification pour ce etudaint :");
        printf("CNE    :");
        scanf("%s",classe[rech].cne);
        printf("Nom    :");
         scanf("%s",classe[rech].nom);
        printf("Prenom    :");
         scanf("%s",classe[rech].prenom);
        for(int i=0;i<4;i++){
            printf("Note    %.2f:",i+1);
            scanf("%s",classe[rech].notes[i]);
            som+=classe[rech].notes[i];
        }   
        classe[rech].moyenne=som/4;
    }

}

#endif
