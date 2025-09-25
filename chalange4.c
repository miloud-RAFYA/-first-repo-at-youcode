#include <stdio.h>
int main()
{
    int cmp;
    int cmp1;
    int d;
    int m;
    int a;
    int d1;
    int m1;
    int a1;
    printf("Entrez la premiere date (mm/jj/aa) :");
    scanf("%02d/%02d/%02d",&m,&d,&a);
    cmp=m/12+d/365+a;
    printf("Entrez la deuxieme date (mm/jj/aa) :");
    scanf("%02d/%02d/%02d",&m1,&d1,&a1);
    cmp1=m1/12+d1/365+a1;
    if(cmp<cmp1){
       printf("%02d/%02d/%02d est plus tot que %02d/%02d/%02d",m,d,a,m1,d1,a1);
    }else if(cmp<cmp1){
        printf("%02d/%02d/%02d est plus tot que %02d/%02d/%02d",m1,d1,a1,m,d,a);
    }else{
         printf("%02d/%02d/%02d est meme que %02d/%02d/%02d",m1,d1,a1,m,d,a);
    }
    return 0;
}