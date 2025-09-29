#include <stdio.h>
int main(){
    int n;
    int x=0;
    int d;
    int t3[8];

    int time[2][2][8] = 
    {
        {
            {
                8,9,11,12,2,3,7,9
            },
            {
                0,43,19,47,0,45,0,45
            }
        },
        {
            {
                10,11,1,3,4,5,9,11
            },
            {
                16,52,31,0,8,55,20,58
            }
        }
    };
    for(int i=0;i<8;i++){
        t3[i]=time[0][0][i]*60+time[0][1][i];
    }
    printf("Entrez une heure (24h) :");
    scanf("%d:%d",&n,&d);
    int h=n*60+d;
    for(int i=0;i<8;i++){
        if(t3[i]>h){
             x=i;
            break;
        }
    }
    printf("heure de depart la plus proche est %d:%d p.m., arrivant a %d:%d p.m.",time[0][0][x],time[0][1][x],time[1][0][x],time[1][1][x]);
     
    return 0;
}