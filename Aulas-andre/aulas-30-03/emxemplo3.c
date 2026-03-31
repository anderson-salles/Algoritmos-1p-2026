#include <stdio.h>
int main(){
    float nota;
    char conc;
    scanf("%f" , &nota);
    if ((nota >= 9) && (nota <= 10)){
        conc = 'A';
    }else if ((nota >= 7) && (nota < 9)){
        conc = 'B';
    }else if ((nota >= 5) && (nota < 7)){
        conc = 'C';
    }else if ((nota >= 0) && (nota < 5)){
        conc = 'D';
    }else {
        conc = 'I';
    }
    printf("A nota eh %.3f. e o conceito eh %c\n" , nota, conc);
    return 0;
} 