
#include <stdio.h>
#include <stdbool.h>
int main(){
        int digit;
       long d;
        int k=0;
        long t[k];
        int  rep_digit[10]={0};
        do{
        k++;
        printf("entre un nombre :");
        scanf("%ld",&t[k-1]);
        }while(t[k-1]>0);
        printf("Chiffre :");
        for(int j=0;j<10;j++){
             printf("%d\t",j);
            }
         printf("\n"); 
        for(int i=0;i<k-1;i++){
        while(t[i]>0){
            d=t[i];
            digit=t[i]%10;
           rep_digit[digit]++;
            t[i]/=10;
        }
        printf("le numero :%ld ",d);
        printf("\n");  
        printf("Occurrences :");
        for(int j=0;j<10;j++){
             printf("%d\t",rep_digit[j]);
            }
            printf("\n");  
        }
         printf("Occurrences totale:");
        for(int i=0;i<10;i++){
             printf("%d\t",rep_digit[i]);
            }
        
        // if(n>0){
        //     // printf("inverse de nemuro ");
        // }else{

        // }
        
        
 
    return 0;
}