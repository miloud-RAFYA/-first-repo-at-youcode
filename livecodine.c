#include <stdio.h>
int main()
{
    int n;
    float t[100];
    float somme = 0;
    int cp=0;
    do{
    printf("pour affiche les notes choise 1:\n");
    printf("pour ajouter les notes choise 2:\n");
    printf("pour calcules  les notes choise 3:\n");
    printf("pour affiche la myene des notes choise 4:\n");
    printf("pour quitte le programme 0:\n");
    printf("entre le choix :");
    scanf("%d", &n);
    switch (n)
    {
        case 1:
            printf("les notes :");
            for(int i=0;i<cp;i++){
                printf("%f\n",t[i]);
            }
            break;
        case 2:
            printf("entre un note");
            scanf("%f",&t[cp]);
            cp++;
            break;
        case 3:
            somme = 0;
            for(int i = 0; i<cp; i++){
                somme = somme + t[i];
            }
            printf("the some of all the notes is: %f", somme);
            break;
            case 4:
            if (cp == 0)
            {
                printf("there is no notes to be added yet");
            }else {
                somme = 0;
                for(int i = 0; i<cp; i++){
                    somme = somme + t[i];
                }
                printf("the average is %f", somme/cp);
            }
            
            break;   
    }
    }while(n!=0);
    
    return 0;
}