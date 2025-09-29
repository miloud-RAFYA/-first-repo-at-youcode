#include <stdio.h>
int main()
{
    // int cmp;
    // int d;
    // int m;
    // int a;
    // printf("");
    // scanf("%d/%d/%i",&d,&a,&m);
    int n;
    int m;
    printf("Entrez deux entiers ::: ");
    scanf("%d/%d", &n, &m);
    // printf("%d %d\n",n,m);
    int t1[n];
    int tailleT1 = 0;
    int t2[m];
    int tailleT2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            t1[tailleT1++] = i;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        if (m % i == 0)
        {
            t2[tailleT2++] = i;
        }
    }
    int mx = 0;
    for(int i=0;i<tailleT1;i++){
        for(int j=0;j<tailleT2;j++){
        if(t1[i]==t2[j]){
            mx=t1[i];
          }
        }
    }
   if(n==0){
        printf("Le plus grand commun diviseur est :%d",m);
    }else{
         printf("Le plus grand commun diviseur est :%d",mx);
    }

    return 0;
}