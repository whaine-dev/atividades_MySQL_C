#include <stdio.h> 

void questao3(void);
void questao7(void);
void questao8(void);
void questao12(void);
void questao13(void);
void questao15(void);
void questao16(void);
void questao17(void);
void questao18(void);

int main() { 

    questao3();
    questao7();
    questao8();
    questao12();
    questao13();
    questao15();
    questao16();
    questao17();
    questao18();


    return 0;
} 

void questao3(void) { 

    char nome[10];
    int nota[3], soma = 0;
    float media;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    
    for(int x = 0; x < 3; x++) {
        printf("%i° nota: ", x + 1);
        scanf("%i", &nota[x]);

        soma = soma + nota[x];
    }

    media = soma / 3;

    printf("Nome do aluno: %s", nome);
    printf("Média: %.2f", media);
} 

void questao7(void) { 

    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    if(num > 0) {
        printf("%i é positivo\n", num);
    } else if (num < 0) {
        printf("%i é negativo\n", num);
    } else {
        printf("%i é zero", num);
    }

} 

void questao8(void) { 

    int idade;

    printf("Digite um número: ");
    scanf("%i", &idade);

    if(idade <= 12) {
        printf("crinaça");
    } else if(idade <= 17) {
        printf("adolescente");
    } else if (idade <= 59) {
        printf("adulto");
    } else {
        printf("idoso");
    }
}

void questao12(void) { 

    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    for(int i = 1; i <= num; i++) {
        printf("%i\n", i);
    }
} 

void questao13() { 

    int num[10], soma = 0;
    float media;

    printf("Digite de 1 até 10\n");
    for(int i = 0; i < 10; i++ ) {
        printf("%i° nota: ", i + 1);
        scanf("%i", &num[i]);

        soma = soma + num[i];

    }

    media = (float)soma / 10;

    printf("Média: %.2f", media);
} 

void questao15() { 

    int num[10], soma = 0;
    int maior = 0;

    printf("Digite de 1 até 10\n");
    for(int i = 0; i < 10; i++ ) {
        printf("%i° nota: ", i + 1);
        scanf("%i", &num[i]);

        soma = soma + num[i];

        if(num[i] > maior) {
            maior = num[i];
        }

    }

    for(int x = 0; x < 10; x++) {
        printf("%i\n", num[x]);
    }

    printf("Soma: %i", soma);

    printf("Maior valor: %i", maior);

} 

void questao16(void) { 

    float nota[40], maior, menor;
    float media;
    float soma = 0, aprovados = 0, reprovados = 0;
    int alunos = 40;

    for(int y = 0; y < 5; y++) {
        printf("Digite a nota do %i° aluno: ", y + 1);
        scanf("%f", &nota[y]);

        soma = soma + nota[y];

        if(nota[y] == 0) {
            maior = nota[y];
            menor =nota[y];
        }

        if(nota[y] > maior) {
            maior = nota[y];
        }

        if(nota[y] < menor) {
            menor = nota[y];
        }

        if(nota[y] >= 7) {
            aprovados = aprovados + 1;
        }

        if(nota[y] < 7) {
            reprovados = reprovados + 1;
        }

    }

    media = soma / alunos;

    printf("Média da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Alunos aprovados: %.2f\n", aprovados);
    printf("Alunos reprovados: %.2f", reprovados);

} 

void questao17(void) { 

   int num, cont = 1;

   printf("Digite um número: ");
   scanf("%i", &num);

   do{

        printf("%i\n", cont);

        cont++;
   }while(cont <= num);

} 

void questao18(void) { 

  int num[100], somaPositivo = 0, somaNegativo = 0, somaZero = 0;

  for(int l = 0; l < 10; l++) {
    printf("Digite o %i° número: ", l + 1);
    scanf("%i", &num[l]);

    if(num[l] > 0) {
        somaPositivo = somaPositivo + 1;
    } else if (num[l] < 0) {
        somaNegativo = somaNegativo + 1;
    } else {
        somaZero = somaZero + 1;
    }

  }

  printf("Quantidade de números Positivos: %i\n", somaPositivo);
  printf("Quantidade de números negativos: %i\n", somaNegativo);
  printf("Quantidade de números zeros: %i\n", somaZero);

} 
