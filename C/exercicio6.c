#include <stdio.h>

float media(float nota1, float nota2, float nota3);
int resto(int num1, int num2);
void linha(void);


int main(void)
{

    float nota1 = 3.4, nota2 = 4.5, nota3 = 5.8;

    float resultado = media(nota1, nota2, nota3);

    printf("resultado: %.2f", resultado);

    linha();

    int num1 = 20, num2 = 7;

    int restodiv = resto(num1, num2);

    printf("resultado: %i\n", restodiv);

    return 0;

}

void linha(void) {
    printf("\n==========================\n\n");
}

float media(float nota1, float nota2, float nota3) {

    return ((nota1 + nota2 + nota3) / 3);
}

int resto(int num1, int num2) {

    return (num1 % num2);
}