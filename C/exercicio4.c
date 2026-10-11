#include <stdio.h>
#include <string.h>



void linha(void) {
    printf("====================\n");
}

void questao1(void)
{

    int num;

    printf("Digite um número para tabudada: ");
    scanf("%i", &num);

    for (int i = 1; i < 10; i++)
    {

        printf("%i x %i = %i\n", i, num, i * num);
    }
}

void questao2(void)
{

    char nome[20][100];
    int hora[20], depende[20], pagamento[20];
    float desconto[20];

    const int paga = 10;
    const int adicional = 40;
    const float inss_ir = 0.13;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite seu nome: ");
        scanf("%99s", nome[i]); //-> esse %99s é para evitar buffer overflow.
        printf("Digite as horas trabalhada: ");
        scanf("%i", &hora[i]);
        printf("Dependentes do funcionario: ");
        scanf("%i", &depende[i]);

        hora[i] * paga;

        hora[i] + (depende[i] * adicional);

        desconto[i] = (float)hora[i] * inss_ir;

        pagamento[i] = hora[i] - (hora[i] * inss_ir);

        printf("\nnome do funcionario: %s\n", nome[i]);
        printf("Salário bruto: %i\n", pagamento[i]);
        printf("Desconto: %.2f\n\n", desconto[i]);
    }
}

void teste(void)
{

    int salario, pagamento = 0;
    float desconto = 0.13;

    printf("digite o salário: ");
    scanf("%i", &salario);

    pagamento = salario - (salario * desconto);

    printf("%i", pagamento);
}



void questao3(void) {

   int boi = 1, Cboi = 0;
   float peso, maior = 0;

    printf("Digite o codíco do boi: ");
        scanf("%i", &Cboi);
    
    while(boi != 0) {
        printf("======= %i° boi =======\n", boi);
        printf("Digite o peso do boi: ");
        scanf("%f", &peso);


        if(peso >= maior) {

            maior = peso;
            Cboi;
        }

        boi++;

        printf("Digite o codigo do boi: ");
        scanf("%i", &Cboi);
    }

    printf("codígo do boi: %i", boi);
    printf("peso do boi: %.2f", maior);

}

void questao4(void)
{

    char nome[10][50];
    float salario[10], reajuste[10];

    for (int x = 0; x < 10; x++)
    {
        printf("Digite seu nome: ");
        scanf("%49s", nome[x]);
        printf("Digite o Salário: ");
        scanf("%f", &salario[x]);

        reajuste[x] = salario[x] + (salario[x] * 0.12);

        printf("\n\nFuncionario: %s\n", nome[x]);
        printf("Reajuste: R$%.2f\n\n", reajuste[x]);
    }
}

void questao5(void)
{

    float nota[2], media_p, resultado_p;

    printf("Digite a 1° nota: ");
    scanf("%f", &nota[0]);
    printf("Digite a 2° nota: ");
    scanf("%f", &nota[1]);

    media_p = (nota[0] * 6) + (nota[1] * 4);

    resultado_p = media_p / 10;

    printf("Média poderada: %.2f", resultado_p);
}

void questao6(void)
{
    float dola, cambio;
    const float real = 5.50; //-> coloquei const pela pratica pq ele é uma valor determidado.

    printf("Digite o valor em dola: ");
    scanf("%f", &dola);

    cambio = dola * real;

    printf("Conversão: %.2f", cambio);
}

void questao7(void)
{

    float a, b, resultado, gasolina, gasto, consumo;
    const float km_pl = 12;

    printf("Digite a distância do ponto A: ");
    scanf("%f", &a);
    printf("Digite a distância do ponto b: ");
    scanf("%f", &b);
    printf("Preço da gasolina: ");
    scanf("%f", &gasolina);

    if (b < a)
    {
        printf("A distância b não pode ser menor que a distância a");
    }
    else
    {
        consumo = (b - a) / km_pl;

        gasto = consumo * gasolina;

        printf("Litros gastos: %.2f\n", consumo);
        printf("Valor gastos: R$%.2f", gasto);
    }
}

void questao7(void) {

    float a, b, resultado, gasolina, gasto, consumo;
    const float km_pl = 12;

    printf("Digite a distância do ponto A: ");
    scanf("%f", &a);
    printf("Digite a distância do ponto b: ");
    scanf("%f", &b);
    printf("Preço da gasolina: ");
    scanf("%f", &gasolina);

    if(b < a) {
        printf("A distância b não pode ser menor que a distância a");
    } else {
        consumo = (b - a) / km_pl;

        gasto = consumo * gasolina;

        printf("Litros gastos: %.2f\n", consumo);
        printf("Valor gastos: R$%.2f", gasto);

    }
}

void questao8(void) {

    int n1, n2, aux;

    printf("Digite um valor: ");
    scanf("%i", &n1);
    printf("Digite outro valor: ");
    scanf("%i", &n2);

    aux = n1; // -> como os valores se sobre escrevem por cima, a gnt precisa coloca o valor de n1 em cima primeiro;
    n1 = n2;
    n2 = aux;

    printf("troca: %i\n", n1);
    printf("troca: %i", n2);
}

void questao9(void)
{

    int n1;

    printf("Digite um número: ");
    scanf("%i", &n1);

    if (n1 % 2 == 0)
    {
        printf("%i é par", n1);
    }
    else
    {
        printf("%i é impar", n1);
    }
}

void questao10(void)
{

    float nota[3], soma = 0, media;

    for (int x = 0; x < 3; x++)
    {
        printf("Digite a %i° nota: ", x + 1);
        scanf("%f", &nota[x]);

        soma = soma + nota[x];
    }

    media = soma / 3;

    if (media < 4)
    {
        printf("Reprovado\n");
        printf("Média: %.2f", media);
    }
    else if (media < 7)
    {
        printf("Em prova final\n");
        printf("Média: %.2f", media);
    }
    else
    {
        printf("Aprovado\n");
        printf("Média: %.2f", media);
    }
}

void questao11(void)
{

    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (idade >= 5 && idade <= 7)
    {
        printf("Junior");
    }
    else if (idade <= 12)
    {
        printf("Infantil");
    }
    else if (idade <= 18)
    {
        printf("Pré");
    }
    else
    {
        printf("Avançado");
    }
}

void questao12(void)
{

    float n1, n2, adi, sub, mul, div;
    char cal;

    printf("Calculadora em C\n");
    printf("+\n");
    printf("-\n");
    printf("*\n");
    printf("/\n");
    printf("Digite uma dessas operação: ");
    scanf("%c", &cal);

    if (cal == '+')
    {
        printf("Digite o 1° número: ");
        scanf("%f", &n1);
        printf("Digite o 2° número: ");
        scanf("%f", &n2);

        adi = n1 + n2;

        printf("Resultado da Adição: %.2f", adi);
    }
    else if (cal == '-')
    {
        printf("Digite o 1° número: ");
        scanf("%f", &n1);
        printf("Digite o 2° número: ");
        scanf("%f", &n2);

        sub = n1 - n2;

        printf("Resultado da Subtração: %.2f", sub);
    }
    else if (cal == '*')
    {
        printf("Digite o 1° número: ");
        scanf("%f", &n1);
        printf("Digite o 2° número: ");
        scanf("%f", &n2);

        mul = n1 * n2;

        printf("Resultado da Multiplicação: %.2f", mul);
    }
    else
    {
        printf("Digite o 1° número: ");
        scanf("%f", &n1);
        printf("Digite o 2° número: ");
        scanf("%f", &n2);

        div = n1 / n2;

        printf("Resultado da Divisão: %.2f", div);
    }
}

void questao13(void)
{

    int num[3], aux, flag;

    for (int y = 0; y < 3; y++)
    {
        printf("Digite o %i° número: ", y + 1);
        scanf("%i", &num[y]);
    }

    for (int f = 0; f < 2; f++)
    {
        for (int x = 0; x < 2; x++)
        {
            if (num[x] > num[x + 1])
            {
                aux = num[x];
                num[x] = num[x + 1];
                num[x + 1] = aux;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nOrdem %i°: %i", i + 1, num[i]);
    }
}


void questao14(void)
{ // -> aqui eu usei 1000% do meu QI 😭
    char nome[10], NomeMaiorIdade[10], NomeMenorIdade[10];
    int idade, i = 1, maior, menor;

    printf("Digite o 1° nome: ");
    fgets(nome, 10, stdin);

    printf("Digite a 1° idade: ");
    scanf("%i", &idade);

    maior = idade;
    menor = idade;

    strcpy(NomeMaiorIdade, nome);
    strcpy(NomeMenorIdade, nome);

    do
    {
        getchar();

        printf("Digite o %i° nome: ", i + 1);
        fgets(nome, 10, stdin);

        printf("Digite a %i° idade: ", i + 1);
        scanf("%i", &idade);

        if (idade == 0)
        {
            break;
        }

        if (idade > maior)
        {
            maior = idade;
            strcpy(NomeMaiorIdade, nome);
        }

        if (idade < menor)
        {
            menor = idade;
            strcpy(NomeMenorIdade, nome);
        }

        i++;

    } while (idade != 0);

    printf("\nNome: %s", NomeMaiorIdade);
    printf("Maior idade: %i\n", maior);

    printf("\nNome: %s", NomeMenorIdade);
    printf("Menor idade: %i\n", menor);
}

void questao15(void)
{

    int soma = 0;

    for (int i = 0; i < 50; i++)
    {

        if (i % 2 == 0)
        {
            soma = soma + i;
        }
    }

    printf("Soma: %i\n", soma);
}


void questao16(void) {

    float media, soma = 0, somaAcesso = 0;
    int somaMulher = 0; 
    int genero[200], idade[200], acessoInternet[200];
    int maior = 0, menor = 999;
    char nome[50], homemValho[50], mulherNova[50];

    for(int i = 0; i < 200; i++) {
        printf("Digite 1 para homem e 2 para mulher: ");
        scanf("%i", &genero[i]);
        getchar();

        printf("Digite seu nome: ");
        fgets(nome, sizeof(nome), stdin);

        printf("Digite sua idade: ");
        scanf("%i", &idade[i]);

        printf("Digite 1 se você tem acesso a internet e 2 para se você naõ tem acesso a internet: ");
        scanf("%i", &acessoInternet[i]);

        soma = soma + (float)idade[i];

        media = soma / 200;
        
        if(genero[i] == 2) {
            somaMulher = somaMulher + 1;
        }

        if(acessoInternet[i] == 1) {
            somaAcesso = somaAcesso + 1;
        }

        if(idade[i] > maior && acessoInternet[i] == 1 && genero[i] == 1){
            maior = idade[i];
            strcpy(homemValho, nome);
        }

        if(idade[i] < menor && genero[i] == 2) {
            menor = idade[i];
            strcpy(mulherNova, nome);
        }

    }

    printf("Média de idade: %.2f\n", media);
    printf("Quantidade de mulher: %i\n", somaMulher);
    printf("Quantidade de pessaos que tem acesso a internet: %i\n", somaAcesso);
    printf("Nome do homem mais velho: %s", homemValho);
    printf("Idade do homem mais velho: %i", maior);
    printf("Nome da mulher mais nova: %s", mulherNova);
    printf("Idade da mulher mais nova: %i", menor);

}

void questao17(void) {

    int numero[10], maior, menor;

    for(int i = 0; i < 10; i++){
        printf("Digite o %i° número: ", i + 1);
        scanf("%i", &numero[i]);

        if (i == 0) {
            maior = numero[i];
            menor = numero[i];
        }

        if(numero[i] > maior) {
            maior = numero[i];
        }

        if(numero[i] < menor) {
            menor = numero[i];
        }

    }

    printf("Maior número: %i\n", maior);
    printf("Menor número: %i", menor);

}

int main() {

    int numero[10], vp[10], vi[10];
    int par = 0, impar = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %i° número: ", i + 1);
        scanf("%i", &numero[i]);

        if(numero[i] % 2 == 0) {
            vp[par] = numero[i];
            par++;
        } else {
            vi[impar] = numero[i];
            impar++;
        }
    }

    printf("\n\n");

    for(int x = 0; x < 10; x++) {
        printf("número: %i \n", numero[x]);
    }

    printf("\n\n");

    for(int y = 0; y < 10; y++) {
        if(vp[y] != 0) {
            printf("número pares: %i \n", vp[y]);
        }
    }

    printf("\n\n");

    for(int w = 0; w < impar; w++) {
        printf("número impas: %i \n", vi[w]);
     
    }


    return 0;
}


void questao19(void) {
    int numero[10], oposto[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite o %i° númeno: ", i + 1);
        scanf("%i", &numero[i]);
    }


    for(int i = 0; i < 10; i++) {
        oposto[9 - i] = numero[i]; //aqui o vetor oposta começou a receber da possição 9 até a 0
    }

    for(int s = 0; s < 10; s++) {
        printf("%i\n", oposto[s]);
    }
}

void questao20(void) {
    char letra[20];
    int vogais = 0, consoante = 0;
    float percentual;

    printf("Digite uma palavra de 20 caracteres: ");
    fgets(letra, sizeof(letra), stdin);

    for(int i = 0; i < 20; i++) {
        if(letra[i] == 'a' || letra[i] == 'A' || letra[i] == 'b' || letra[i] == 'B' || letra[i] == 'c' || letra[i] == 'C' || letra[i] == 'd' || letra[i] == 'D' || letra[i] == 'e' || letra[i] == 'E') 
        {
            vogais = vogais + 1;
        } else {
            consoante = consoante + 1;
    }

    }

    percentual = ((float)consoante / 20) * 100;

    printf("Quantidade de vogais: %i\n", vogais);
    printf("percentual de consoante: %.2f%%", percentual);
}

void questao21(void) {

    char nome[20];
    int nota1[5], nota2[5], soma[5];
    float media[5];

    for(int i = 0; i < 5; i++) {
        linha();
        printf("%i° aluno\n", i + 1);
        printf("Digite o nome do aluno: ");
        fgets(nome, sizeof(nome), stdin);

        printf("Digite a 1° nota: ");
        scanf("%i", &nota1[i]);

        printf("Digite a 2° nota: ");
        scanf("%i", &nota2[i]);
        getchar();

        printf("\n");

        soma[i] = nota1[i] + nota2[i];

        media[i] = (float)soma[i] / 2;
    }

    for(int x = 0; x < 5; x++) {
        printf("\nNome do aluno: %s\n", nome);
        printf("1° nota: %i\n", nota1[x]);
        printf("2° nota: %i\n", nota2[x]);
        printf("Média: %.2f", media[x]);
    }

}


int main(void)
{

    // questao1();
    // questao2();
    // questao3();
    // questao4();
    // questao5();
    // questao6();
    // questao7();
    // questao8();
    // questao9();
    // questao10();
    // questao11();
    // questao12();
    // questao13();
    // questao14();
    // questao15();
    // questao16();
    // questao17();
    // questao18();
    // questao19();
    // questao20();
    // questao21();

    return 0;
}
