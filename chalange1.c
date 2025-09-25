#include <stdio.h>
int main(){
    char ISBN[23];
    int n=0;
    int cp=0;
    printf("Entrez ISBN :");
    scanf("%s",ISBN);
    for(int i=0 ;i<17;i++){
        if(ISBN[i]=='-'&& n==0){
          printf("Prfixe GS1 :");
         for(int j=0;j<=i-1;j++){ 
             printf("%c",ISBN[j]);
            cp++;
         }
         n++;
          printf("\n");
          continue;
        }  
         if(ISBN[i]=='-'&&n==1){ 
          printf("Identifiant de groupe :");
          // printf("%d:%d",cp,i);
           for(int j=cp+1;j<i;j++){
             printf("%c",ISBN[j]);
            cp++;
          }
          n++;
           printf("\n");
          continue;
        }
         if(ISBN[i]=='-'&& n==2){ 
          printf("Code de lediteur :");
           for(int j=cp+2;j<i;j++){
               printf("%c",ISBN[j]);
            cp++;
         }
         n++;
           printf("\n");
          continue;
        }if(ISBN[i]=='-'&& n==3){ 
          printf("Numero darticle :");
           for(int j=cp+3;j<i;j++){
               printf("%c",ISBN[j]);
            cp++;
         }
         n++;
           printf("\n");
           printf("Chiffre de controle :");
           for(int k=17;k>i;k--){
               printf("%c",ISBN[k]);
           
         }
          continue;
        }
        
 }
    return 0;
}