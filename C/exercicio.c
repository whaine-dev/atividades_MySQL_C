#include <stdio.h>
#include <math.h>

void ana(void);
void numero(void);
void cubo(void);
void reajuste(void);
void eleitores(void);
void combustivel(void);
void inflacao(void);
void tempo(void);
void consorcio(void);

int main() {
 
    ano();
    numero();
    cubo();
    reajuste();
    eleitores();
    combustivel();
    inflacao();
    consorcio();

    return 0;
}

void ano(void) {
    int ano, nascimento;

    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &ano);

    nascimento = 2026 - ano;

    printf("o seu ano de nascimento é: %d", nascimento);

}

void numero(void) {
    int numero;

    printf("Digite um núemro: ");
    scanf("%d", &numero);

    printf("antecessor: %d\nAtual: %d\nSucessor: %d", numero - 1, numero, numero + 1);

}

void cubo(void) {
    int numero, cubo;

    printf("Digite um número: ");
    scanf("%d", &numero); 
    
    cubo = pow(numero, 3); 

    printf("Valor ao cubo: %d", cubo);
    
}

void reajuste(void) {
    float salario, porcentagem, reajuste;

    printf("Salário do trabalhador: ");
    scanf("%f", &salario);

    printf("Percentual de reajuste: ");
    scanf("%f", &porcentagem);

    reajuste = salario * (porcentagem / 100) + salario;
   

    printf("Novo salário: %.2f", reajuste);
}

void eleitores(void) {
    float nulos, brancos, validos, p_nulos, p_brancos, p_validos, n_eleitores, sem_votos, eleitores = 10000;

    printf("Total de eleitores na região: 10.000\n\n");

    printf("Digite os valoress dos votos nulos: ");
    scanf("%f", &nulos);

    printf("Digite os valores dos votos brancos: ");
    scanf("%f", &brancos);

    printf("Digite os valores dos válidos: ");
    scanf("%f", &validos);

    p_nulos = (nulos / eleitores) * 100;
    p_brancos = (brancos / eleitores) * 100;
    p_validos = (validos / eleitores) * 100;

    n_eleitores = eleitores - (nulos + brancos + validos);

    sem_votos = (n_eleitores / eleitores) * 100;

    printf("\n\nVotos nulos: %.2f%%\nVotos brancos: %.2f%%\nVotos Válidos: %.2f%%\nTotal de quem não votou: %.2f%%", p_nulos, p_brancos, p_validos, sem_votos);
    
}

void combustivel(void) {
    float quilometragem_inicial, quilometragem_final, litros_consumido, preco_conbustivel, distancia_percorida, litro_preco, consumo_litro;
    
    printf("Digite a quilometragem inicial do seu veículo: ");
    scanf("%f", &quilometragem_inicial);

    printf("Digite a quilometragem final do seu veículo: ");
    scanf("%f", &quilometragem_final);

    printf("Digite o valor dos litro consumidos: ");
    scanf("%f", &litros_consumido);

    printf("Digite o preço do combustível: ");
    scanf("%f", &preco_conbustivel);

    distancia_percorida = quilometragem_final - quilometragem_inicial;

    litro_preco = litros_consumido * preco_conbustivel;

    consumo_litro = distancia_percorida / litros_consumido;

    printf("Distância: %.2fkm\nValor total gasto: %.2f\nconsumo do carro: %.2f", distancia_percorida, litro_preco, consumo_litro);
    return 0;
}

void combustivel(void) {
    float combustivel = 6.59, odometro_inicial, odometro_final, distancia_percorrida, combustivel_gasto, media_consumo, valor_recebido, lucro;

    printf("Digite a marcação do odômetro no dia: ");
    scanf("%f", &odometro_inicial);

    printf("Digite a marcação do odômetro no final do dia: ");
    scanf("%f", &odometro_final);

    printf("Litros gastos: ");
    scanf("%f", &combustivel_gasto);

    printf("Digite o valor recebido dos passageiros: R$");
    scanf("%f", &valor_recebido);

    if (odometro_final >= odometro_inicial){
        distancia_percorrida = odometro_final - odometro_inicial;

        media_consumo = distancia_percorrida / combustivel_gasto;

        lucro = valor_recebido - (combustivel_gasto * combustivel); 

        printf("Média do consumo em km/l: %.2f\nLucro: R$%.2f", media_consumo, lucro);
    } else {
        printf("O odômtro final não pode se menor que o odômetro inicíal");
    }
    
}

void inflacao(void) {
    float preco_abril, preco_maio, infracao, reducao;

    printf("Digite o valor da mercadoria em abril: ");
    scanf("%f", &preco_abril);

    printf("Digite o valor da mercadoria em maio: ");
    scanf("%f", &preco_maio);

    infracao = (((preco_maio - preco_abril) / preco_abril) * 100);

    reducao = (((preco_maio - preco_abril) / preco_abril) * 100);
    
    if (preco_maio > preco_abril) {
        printf("Infração: %.2f%%", infracao);

    } else if (preco_abril > preco_maio) {
        printf("Redução: %.2f%%", reducao);
    } else {
        printf("Os valores de abril e maio são iguais, ou seja, não houve infração e nem redução.");
    }
}

#include <stdio.h>

void tempo(void) {
    int hora, minuto, segundo, entrada;

    printf("Digite a duração do evento em segundos: ");
    scanf("%d", &entrada);

    hora = entrada / 3600;
    minuto = (entrada % 3600) / 60;
    segundo = entrada % 60;
    
    printf("Duração do evento: %d:%d:%d", hora, minuto, segundo);

}

void consorcio(void) {
    float consorcio, valor_prestacaos, prestacaos_pagas_valor, valor_ataul_prestacao;
    int prestacoes, prestacaos_pagas, prestacao_falta;

    printf("Digite o valor do seu consórcio: ");
    scanf("%f", &consorcio);

    printf("Digite o total de prestação: ");
    scanf("%d", &prestacoes);

    printf("Digite o total de prestaçãos pagas: ");
    scanf("%d", &prestacaos_pagas);

    valor_prestacaos = consorcio / prestacoes;

    prestacao_falta = prestacoes - prestacaos_pagas;

    prestacaos_pagas_valor = valor_prestacaos * prestacaos_pagas;

    valor_ataul_prestacao = consorcio - prestacaos_pagas_valor;

    printf("Saldo devedor: %.2f\nQunatidade da prestação sem pagar: %d", valor_ataul_prestacao, prestacao_falta);

}