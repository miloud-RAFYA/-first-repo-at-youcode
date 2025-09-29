#include <stdio.h>
#include <stdbool.h>
int main(){
        bool digit_seen[10]={false};
        int digit;
        bool rep_digit[10]={false};
        long n;
        printf("entre un nombre :");
        scanf("%ld",&n);
        while(n>0){
            digit=n%10;
            if(digit_seen[digit]){
                rep_digit[digit]=digit_seen[digit];
            }
            digit_seen[digit]=true; 
            n/=10;
        }
        for(int i=0;i<10;i++){
            if(rep_digit[i]){
                printf("%d\n",i);
            }
        }
        // if(n>0){
        //     // printf("inverse de nemuro ");
        // }else{

        // }
        
        
 
    return 0;
}