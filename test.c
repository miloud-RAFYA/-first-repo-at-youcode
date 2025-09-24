
#include <stdio.h>
int main()
{
int d=0;
int f=0;
for(int i=0;i<6;i++){
    for(int j=0;j<i;j++){
    printf(" ");
    }
    if(d!=6 &&  i>2){
    printf("*");
    }else{
      printf(" ");
    }
    d++;
    for(int c=i*2;c<10;c++){
      printf(" ");
    }
    if(f!=5){
    printf("*");
    }
    f++;
    printf("\n");
}
return 0;
}
