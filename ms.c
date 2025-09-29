#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int n;
    // int som=0;
    // int t[n];
    // printf("entre la taile da tableau :");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++){
    //     printf("entre le nombre  %d :",i+1);
    //     scanf("%d",&t[i]);
    // }
    // for(int i=0;i<n;i++){
    //     som+=t[i];
    // }
    // printf("la somme est :%d\n",som);
    // printf("la moyenne est :%d",som/n);
    // int t[5]={1,8,2,7,9};
    // int min=t[0];
    // int max=t[0];
    // for(int i=0;i<5;i++){
    //     if(t[i]>max){
    //         max=t[i];
    //     }
    // }
    //  for(int i=0;i<5;i++){
    //     if(t[i]<min){
    //         min=t[i];
    //     }
        
    // }
    // printf("la minimum est :%d\n",min);
    // printf("la minimum est :%d",max);
    //    int t[5]={1,8,2,7,9};
    //    int tap=0;
    //     for(int j=0;j<3;j++){
    //         tap=t[j];
    //         t[j]=t[4-j];
    //         t[4-j]=tap;

    //     }
    //      for(int j=0;j<=4;j++){
    //         printf("%d",t[j]);

    //     }

    // int n;
    // int j=0;
    // int t[5]={1,8,7,7,9};
    // printf("entre le nombre :");
    // scanf("%d",&n);
    // for(int i=0;i<5;i++){
    //    if(n==t[i]){
    //     j++;
    //    }
    // }
    // printf("le nombre repiter dans tableau %d fois .",j);

//     int n;
//     int j=0;
//     int t[5]={1,8,7,7,9};
//     printf("entre le nombre :");
//     scanf("%d",&n);
//    int c=0;
//    int d=0;
//     do
//     {
//          c=0;
//         for (int i = 0; i < 5; i++)
//         {
//             if (n == t[i])
//             {
//                 for (int j = i; j < 5 - i + 1; j++)
//                 {
//                     t[j] = t[j + 1];
//                     c=1;
                   
//                 }
//                  d++;
//             }
//         }
     
//     }while(c==1);

//     for (int j = 0; j <5-d; j++)
//     {
//         printf("%d", t[j]);
//     }
    


    int t[5]={1,8,7,6,9};
    int n=0;
    int t1[n];
    int j=0;
    int t2[j];
    for(int i=0;i<5;i++){
       if(t[i]%2==0){
         printf("%d\n",t[i]);
    }else{
        printf("%d\n",t[i]);
    }
}
    
   return 0;
}