#include <stdio.h>
#include <string.h>

void linha(void);
int cad_aluno(void);
int cad_produto(void);
int cad_funcionario(void);

typedef struct{
    
    char nome[100];
    int idade;
    int matricula;
    float nota[4];
    float soma;
    float media;
    
}aluno;

typedef struct{

    char codProduto[5];
    char nome[100];
    float preco;
    int quantidadeEstoque;


}produto;

typedef struct{
    char nome[100];
    char cpf[14];
    int idade;
    float salario;

}funcionario;

int main() {
    
    cad_aluno();
    linha();
    cad_produto();
    linha();
    cad_funcionario();

	return 0;
}

void linha(void) {
    printf("\n\n================\n\n");
}

int cad_aluno(void) {

        aluno inforAluno;
    
    inforAluno.soma = 0;
	
	    printf("Informe o nome do aluno: ");
	    fgets(inforAluno.nome, 100, stdin);
	    
	    printf("Informe a idade do aluno: ");
	    scanf("%i", &inforAluno.idade);
	    
	    printf("Informe a matrícula: ");
	    scanf ("%i", &inforAluno.matricula);
	    
	    for(int i = 0; i < 4; i++) {
	        printf("Digite nota do aluno: ");
	        scanf("%f", &inforAluno.nota[i]);
	        
	        inforAluno.soma = inforAluno.soma + inforAluno.nota[i];
	    }
	    
    inforAluno.media = inforAluno.soma / 4;

    printf("Nome do Aluno: %s\n", inforAluno.nome);
    printf("Idade do Aluno: %i\n", inforAluno.idade);
    printf("Matrícula do Aluno: %i\n", inforAluno.matricula);
    printf("Média do Aluno: %.2f", inforAluno.media);

    return 0;
}

int cad_produto(void) {

    produto inforProduto[3];

    for(int x = 0; x < 3; x++) {

        printf("Digite o Código do produto: ");
        fgets(inforProduto[x].codProduto, 5, stdin);
        
        printf("Digite o nome do Produto: ");
        fgets(inforProduto[x].nome, 100, stdin);
        
        printf("Digite o preço do Produto: ");
        scanf("%f", &inforProduto[x].preco);
      
        printf("Digite a Quantidade de Estoque: ");
        scanf("%i", &inforProduto[x].quantidadeEstoque);
        getchar();
        linha();

    }

    for(int i = 0; i < 3; i++) {
        printf("Nome do Produto: %s\n", inforProduto[i].nome);
        printf("Valor total: %.2fzn", inforProduto[i].preco * inforProduto[i].quantidadeEstoque);

    }

    return 0;
}

int cad_funcionario(void) {

    funcionario infoFuncionario[3];

    float somaSalario = 0;
    float media = 0;
    float maiorSalario = 0;
    char nomeMaiorSalario[100];

    for(int i = 0; i < 3; i++) {
        printf("Digite o nome do %i° funcionario: ", i + 1);
        fgets(infoFuncionario[i].nome, 100, stdin);

        printf("Digite o CPF: ");
        fgets(infoFuncionario[i].cpf, 14, stdin);

        printf("Digite a Idade: ");
        scanf("%i", &infoFuncionario[i].idade);

        printf("Digite o sálario: ");
        scanf("R$%f", &infoFuncionario[i].salario);
        getchar();
        printf("\n\n");

        somaSalario = somaSalario + infoFuncionario[i].salario;

        if(infoFuncionario[i].salario > maiorSalario) {
            maiorSalario = infoFuncionario[i].salario;
            strcpy(nomeMaiorSalario, infoFuncionario[i].nome);
        }

    }

    media = somaSalario / 3;

    for(int x = 0; x < 3; x++) {
        printf("\n%i° Funcionário Cadastradio: %s", x + 1, infoFuncionario[x].nome);
        printf("Seu CPF: %s", infoFuncionario[x].cpf);
    }

    printf("Média salarial: %.2f\n", media);
    printf("Funcionário %s tem o maior salario de: R$%.2f", nomeMaiorSalario, maiorSalario);

    return 0;
}

