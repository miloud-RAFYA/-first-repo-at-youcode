
#include <stdio.h>
#include <stdbool.h>
int main(){
        int digit;
        int  rep_digit[10]={0};
        long n;
        do{
        printf("entre un nombre :");
        scanf("%ld",&n);
        }while(n>=0);
       
        while(n>0){
            int x=0;
            digit=n%10;
           rep_digit[digit]++;
            n/=10;
        }
         for(int i=0;i<10;i++){
             printf("%d",i);
            }
          printf("\n");  
        for(int i=0;i<10;i++){
             printf("%d",rep_digit[i]);
            }
        
        // if(n>0){
        //     // printf("inverse de nemuro ");
        // }else{

        // }
        
        
 
    return 0;
}