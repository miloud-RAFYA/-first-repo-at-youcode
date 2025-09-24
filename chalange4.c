#include <stdio.h>
int main(){
    // int cmp;
    // int d;
    // int m;
    // int a;
    // printf("");
    // scanf("%d/%d/%i",&d,&a,&m);
    int n;
    int m;
    printf("Entrez deux entiers : ");
    scanf("%d/%d",&n,&m);
    int x=0;
    int t[n];
    int t1[m];
    for(int i=1;i<=n;i++){

        if(n%i==0){
         t[x]=i;
        printf("%d\n",i);
        x++;
        }
        }
    for(int i=1;i<=m;i++){
        if(m%i==0){
         t1[x]=i;
        x++;
        }
        }
    int max1=t[0];
    for(int i=1;i<=sizeof(t)/ sizeof(t[0]);i++){
        // printf("%d\n",t[i]);
          if(t[i]>max1){
            max1=t[i];
          }
    }
    int max2=t1[0];
    for(int i=1;i<=sizeof(t1)/ sizeof(t1[0]);i++){
          if(t1[i]>max2){
            max2=t1[i];
          }
    }
    if(max1>max2){
        printf("Le plus grand commun diviseur est :%d",max1);
    }else{
        printf("Le plus grand commun diviseur est :%d",max2);
    }
    
    
    
    
    return 0;
}