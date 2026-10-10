#include <stdio.h>

void ana(void);

int main() {
 
    ano();

    return 0;
}

void ano(void) {
    int ano, nascimento;

    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &ano);

    nascimento = 2026 - ano;

    printf("o seu ano de nascimento é: %d", nascimento);

}