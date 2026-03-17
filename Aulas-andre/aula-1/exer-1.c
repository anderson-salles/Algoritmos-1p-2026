#include <stdio.h>

void main(){
    const float PI=3.14;
    float area, raio;
    printf("Digite o raio: ");
    scanf("%f", &raio); //estou lendo o raio
    area = PI * raio * raio; //funçao calculo de area
    printf("Area é %.2f\n", area);
    if (area > 100){
        printf("a area é maior que 100\n");
    }
}
