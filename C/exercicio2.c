#include <stdio.h>

int inteiros_positivos(void) {//1° Questão
    int num, maior = 0;

    printf("\n===MAIOR NÚMERO LIDO===\n\n");

    printf("Digite um valor: ");
    scanf("%i", &num);

    while (num != 0) {

        if (num > maior) {
            maior = num;
        }
        printf("Digite um número: ");
        scanf("%i", &num);
    }

    printf("O maior número lido foi: %i", maior);
    return 0;
}

int maior_menor_idade(void) { //2° Questão
    int idade;

    printf("\n===MAIOR DE IDADE===\n\n");

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18)
    {
        printf("Você é maior de idade");
    }
    else
    {
        printf("Você é menor de idade");
    }

    return 0;
}

int par_impar(void) { //3° questão
    int numero;

    printf("\n===PAR OU IMPAR===\n\n");

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    if (numero % 2 == 0 ) {
        printf("O número %i é par", numero);
    } else {
        printf("O número %i é impar", numero);
    }

    return 0;
}

int maior_igual(void) {//4° questão
    int num[3];

    printf("\n===DIGITE TRÊS NÚMEROS===\n\n");

    for(int i = 0; i < 3; i++) {
        printf("Digite o %i° número: ", i + 1);
        scanf("%i", &num[i]);
    }

    if (num[0] == num[1] || num[1] == num[2] || num[0] == num[2]) {
        printf("Temos dois números iguais");
    } else if (num[0] == num[1] == num[2]) {
        printf("Temos três números iguais");
    } else {
        printf("Nenhum dos números são iguais");
    }


    return 0;
}

int num_ordem(void) {//5° questão
    int num[3], temp;

    printf("\n===ORDEM CRECNETE===\n\n");

    for(int i = 0; i < 3; i++) {
        printf("Digite o %i número: ", i + 1);
        scanf("%i", &num[i]);
    }

    if(num[0] > num[1]) {
        temp = num[0];
        num[0] = num[1];
        num[1] = temp;
    }

    if(num[0] > num[2]) {
        temp = num[0];
        num[0] = num[2];
        num[2] = temp;
    }

    if (num[1] > num[2]) {
        temp = num[1];
        num[1] = num[2];
        num[2] = temp;
    }

    printf("\nOrdem crecente: %i %i %i", num[0], num[1], num[2]);

    return 0;
}

int cursos(void) {//6° questão
    int opcao;

    printf("\n===ESCOLHAS===\n");


    printf("Escolha um número de 1 a 7: ");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1:
            printf("Você pertence ao curso de Agronomia");
            break;
        case 2:
            printf("Você pertence ao curso de Veterinária");
            break;
        case 3:
            printf("Você pertence ao curso de JOGOS DIGITAIS");
            break;
        case 4:
            printf("Você pertence ao curso de Pedagogia");
            break;
        case 5:
            printf("Você pertence ao curso de Letra");
            break;
        case 6:
            printf("Você pertence ao curso de Engenharia de Alimentos");
            break;
        case 7:
            printf("Você pertence ao curso de Análise de Desenvolvimento de Software");
            break;
        default:
            printf("Não existe essa opção");
            break;
    }

    return 0;
}

int media(void) {//7° questão
    
    float nota[50], soma = 0, media_aluno;

    printf("Digite a media dos alunos");

    for (int i = 0; i < 50; i++) {
        printf("%i° nota: ", i + 1 );
        scanf("%f", &nota[i]);

        soma = soma + nota[i];
    }

    media_aluno = soma / 50;

    if (media_aluno >= 8) {
        printf("A turma foi aprovada com Média: %.2f\n", media_aluno);
    } else if (media_aluno >= 6) {
        printf("A turma ficou de recuperação com Média: %.2f\n", media_aluno);
    } else {
        printf("A turma foi reprovada com Média: %.2f kkkkkkkkkkk\n", media_aluno);
        printf("Vejo vocês no próximo ano kkkkkkkkkk\n");
    }

    return 0;
}

int mediaw(void) {//8° questão
    float soma = 0, media_aluno, nota[50];
    int i = 0;

    printf("Digite a nota dos alunos\n");

    while (i < 50) {
        printf("%i° nota: ", i + 1);
        scanf("%f", &nota[i]);

         soma = soma + nota[i];
         i++;
    }

    media_aluno = soma / 50;

    if (media_aluno >= 8) {
        printf("\nTruma aprovada com Média: %.2f\n", media_aluno);
    } else if (media_aluno >= 6) {
        printf("\nTurma focou de recuperação com Média: %.2f\n", media_aluno);
    } else {
        printf("\nGeral reprovou kkkkkkkkkkk\n");
        printf("Média: %.2f\n", media_aluno);
    }

    return 0;
}

int mediado(void) {//9° questão
    float nota[50], soma = 0, media;
    int i = 0;

    printf("Digite a nota dos alunso\n");

    do {
        printf("%i° nota: ", i + 1);
        scanf("%f", &nota[i]);

        soma = soma + nota[i];
        i++;

    } while (i < 50); 

    media = soma / 50;

    if (media >= 8) {
        printf("\nA turma foi aprovada com Média: %.2f\n", media);
    } else if (media >=6) {
        printf("\nA turma ficou de recuperação com Média: %.2f\n", media);
    } else {
        printf("\nBom, se vocês não forem aprovados e nem ficaram de recuperação então.....\n");
        printf("Média: %.2f\n", media);
    }

    return 0;
}

int soma_impar(void) {//10° questão
    int num[50], soma = 0;

    printf("Digite os valores\n");

    for(int i = 0; i < 50; i++) {
        printf("%i° nota: ", i + 1);
        scanf("%i", &num[i]);

        if (num[i] % 2 == 0) {
        } else {
            soma = soma + num[i];
        }
    }

    printf("Soma de todos os números impares: %i", soma);

    return 0;
}

int grande_impar(void) {//11° questão

    int num[100], soma = 0;

    printf("Digite os valores\n");

    for( int i = 100; i <= 200; i++) {
        if (i % 2 == 0) {

        } else {
            soma = soma + i;
        }
    }

    printf("Soma de todos os números impares: %i\n", soma);


    return 0;
}

int inteiro_meior_menor(void) {//12° questão
    int num[20]; 


    printf("Digite qualquer número inteiro\n");
    for(int i = 0; i < 20; i++) {
        printf("%i° valor: ", i + 1);
        scanf("%i", &num[i]);
    }

    int maior = num[0];
    int menor = num[0];

    for(int j = 1; j < 20; j++) {
        if(num[j] > maior){
            maior = num[j];
        }

        if(num[j] < menor) {
            menor = num[j];
        }
    }

    printf("Maio número:  %i\n", maior);
    printf("Manor número: %i\n", menor);
   
   

    return 0;
}

int soma(void) {//13° questão
    int num[2], soma = 0;

    printf("Digite dois números para calcular sem multiplicão\n");
    for(int i = 0; i < 2; i++) {
        printf("%i° valor: ", i + 1);
        scanf("%i", &num[i]);
    }

    for(int w = 0; w < num[1]; w++) {
        soma = soma + num[0];
    }

    printf("Resultado do calcular sem multiplicação: %i\n", soma);

    return 0;
}

int ler_pares(void) {//14° questão
    int num = 1, cont = 0, soma = 0, contador_pares = 0;
    float media;

    printf("Digite os valores\n");

    while(num != 0) {
        printf("%i° valor: ", cont + 1);
        scanf("%i", &num);

        if(num % 2 == 0 && num != 0){
            soma = soma + num;
            contador_pares++;
        }
        
        cont++;
    }

    media = (float)soma / contador_pares;

    printf("Média dos números pares: %.2f\n", media);

    return 0;
}

int pesquisa(void) {//15° questão
    int idade[100], sexo[100], opiniao[100], soma_idade = 0;
    int mulher_cont_ex = 0, homen_cont_pe = 0, homen_nao_gostou = 0;
    int mulher_cont = 0, homen_cont = 0, quantidade;
    float percentual, media_idade;

    printf("Pesquisa do filme Vingadores – Guerra Infinita\n\n");

    for(int i = 0; i < 5; i++) {
        printf("=====================================\n");
        printf("%i° pesquisa de opinião\n", i + 1);
        printf("Digite sua idade: ");
        scanf("%i", &idade[i]);

        printf("\n1-Fem/2-Mas\n");
        printf("Digite seu sexo: ");
        scanf("%i", &sexo[i]);
            if(sexo[i] != 1 && sexo[i] != 2) {
                printf("Só pode escolher entre 1 e 2");
                break;
            }

        printf("\n1-não gostei\n2-esperava mais\n3-vale o ingresso\n4-Exelente\n");
        printf("Digite o valor da sua opinião: ");
        scanf("%i", &opiniao[i]);
        printf("=====================================\n");
            if(opiniao[i] != 1 && opiniao[i] != 2 && opiniao[i] != 3 && opiniao[i] != 4) {
                printf("Só pode escolher de 1 até 4");
                break;
            }

        if(sexo[i] == 1 && opiniao[i] == 4) {
            soma_idade = soma_idade + idade[i];
            mulher_cont_ex++;
        }

        if(sexo[i] == 2) {
            homen_cont_pe++;
        }

        if(sexo[i] == 2 && opiniao[i] == 1){
            homen_nao_gostou++;
        }

        if(sexo[i] == 1 && opiniao[i] == 2){
            mulher_cont++;
        }

        if(sexo[i] == 2 && opiniao[i] == 2){
            homen_cont++;
        }

    }

    media_idade = (float)soma_idade / mulher_cont_ex;
    percentual = (float)(homen_nao_gostou / homen_cont_pe) * 100;
    quantidade = mulher_cont + homen_cont;


    printf("\nMédia da idade de mulheres que acharam o filme exelente: %.2f\n", media_idade);
    printf("Percentual de homens que não gostaram do filme: %.2f\n", percentual);
    printf("Quantidade de pessoas que esperavam mais do filme: %i\n", quantidade);

    return 0;
}

int pesquisa_canais(void) {//16° questão
    int canais = -1, cont = 0, assistindo_momento = 0;
    int soma_assistindo, total;
    int sbt = 0, record = 0, globo = 0, rede_tv = 0;
    float per_sbr, per_record, per_glogo, per_redetv;

    printf("pesquisa de canis\n");

    while(canais != 0) {
        printf("%i° casa\n\n", cont + 1);
        printf("1-SBT\n2-Record\n3-Globo\n4-Rede TV\n");
        printf("0 - Encerrar a pesquisa\n\n");
        printf("Digite a opição aqui: ");
        scanf("%i", &canais);

        printf("\n1 - Assitinto no momento\n");
        printf("2 - Não tava assitinto no momento");
        scanf("%i", &assistindo_momento);

        if(canais == 1) {
            sbt = sbt + soma_assistindo;
        }

        if(canais == 2) {
            record = record + soma_assistindo;
        }

        if(canais == 3) {
            globo = globo + soma_assistindo;
        }

        if(canais == 4) {
            rede_tv = rede_tv + soma_assistindo;
        }
        cont++;
    }

    total = sbt + record + globo + rede_tv;

    per_sbr = (float)sbt / total * 100;
    per_record = (float)record / total * 100;
    per_glogo = (float)globo / total * 100;
    per_redetv = (float)rede_tv / total * 100;



    printf("percentual de audiência para cada canal:");
    printf("SBT: %.2f\nRecord: %.2f\n3-Globo: %.2f\nRede TV: %.2f\n", per_sbr, per_record, per_glogo, per_redetv);

    if (sbt > record && sbt > globo && sbt > rede_tv) {
        printf("SBT com a maior audiência\n");
    } else if (record > sbt && record > globo && rede_tv) {
        printf("Redord com a maior audiência\n");
    } else if (globo > sbt && globo > record && globo > rede_tv) {
        printf("Glogo com a mior audiência\n");
    } else {
        printf("Rede TV com a maior audiência\n");
    }

    if (sbt < record && sbt < globo && sbt < rede_tv) {
        printf("SBT com a menor audiência\n");
    } else if (record < sbt && record < globo && record < rede_tv) {
        printf("Record com a menor audiência\n");
    } else if (globo < sbt && globo < record && globo < rede_tv) {
        printf("Globo com a menor audiência\n");
    } else {
        printf("Rede TV com a menor audiência");
    }
    
    return 0;
}

int main(void)
{

    //inteiros_positivos();
    maior_menor_idade();
    //par_impar();
    //maior_igual();
    //num_ordem();
    //cursos();
    //media();
    //mediaw();
    //mediado();
    //soma_impar();
    //grande_impar();
    //inteiro_meior_menor();
    //soma();
    //ler_pares();
    //pesquisa();
    //pesquisa_canais();

    return 0;
}