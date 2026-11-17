#include <stdio.h>

void linha(void);
int cad_aluno(void);
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

int main() {
    
    //cad_aluno();
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

int cad_funcionario(void) {

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