#include <stdio.h>

float media(float nota1, float nota2, float nota3);


int main(void)
{

    float nota1 = 3.4, nota2 = 4.5, nota3 = 5.8;

    float resultado = media(nota1, nota2, nota3);

    printf("resultado: %.2f", resultado);

    return 0;

    
}

float media(float nota1, float nota2, float nota3) {

    return ((nota1 + nota2 + nota3) / 3);
}