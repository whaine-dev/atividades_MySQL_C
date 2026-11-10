#include <stdio.h>

float media(float nota1, float nota2, float nota3);
int resto(int num1, int num2);
int menor(int valor[3]);
int anoNascimento();
int mes(int mesAtual);
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

    linha();

      int valor[3];

    for (int y = 0; y < 3; y++) {
        printf("Digite um número: ");
        scanf("%i", &valor[y]);

    }

    int menorvalor = menor(valor);

    
    printf("Menor valor: %i\n\n", menorvalor);

    linha();

    anoNascimento();

    linha();

    int mesAtual;
    
    printf("Digite o Mês Atual: ");
    scanf("%i", &mesAtual);

    mesAtual = mes(mesAtual);

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

int menor(int valor[3]) {

    int menorValor = valor[0];

    for (int i = 1; i < 3; i++) {

        if (valor[i] < menorValor) {
            menorValor = valor[i];
        }
    }

    return menorValor;
}

int anoNascimento() {

    int idade;
    int ano;
    const int anoAtual = 2026;

    printf("Digite o seu ano de Nasciemnto: ");
    scanf("%i", &ano);

    if (ano < anoAtual) {
        idade = anoAtual - ano;
    }

    printf("sua idade é: idade: %i", idade);

    return idade;
    
}

int mes(int mesAtual) {

    int anoFinal;

    if(mesAtual <= 12) {
        anoFinal =  12 - mesAtual;

        printf("Faltam %i Mês acabar", anoFinal);
    } else {
        printf("o Mês não pode ser maior que 12");
    }


    return anoFinal;
}