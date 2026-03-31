#include <stdio.h>
int main(){
    float a,b;
    char conc[50];
    scanf("%f %f" , &a,&b);
    if (a == b){
        printf ("Empate");
    }if (a > b){
        printf ("A Ganhador");
    }if (a < b){
        printf ("B Ganhador");
    }
return 0;
}