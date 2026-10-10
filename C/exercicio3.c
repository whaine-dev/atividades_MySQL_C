#include <stdio.h> 

void par_impar(void) { //1° questão

    for(int i = 0; i < 100; i++) {
        if(i % 2 == 0) {
            printf("%i é par | posição 0\n\n", i);
        } else {
            printf("%i é impar |posição 1\n\n", i);
        }
    }
}

void soma_posicao(void) { //2° questão

    int num[10], soma = 0;

    for(int y = 0; y < 10; y++) {
        printf("Digite o %i° número: ", y + 1);
        scanf("%i", &num[y]);

        soma = soma + num[y];
    }


    printf("\nResulado final: %i", soma);
}


void mult(void) {//3° questão

    float v_um[20], v_dois[20], v_tres[20];

    for(int x = 0; x < 20; x++) {

        printf("Digite um némro: ");
        scanf("%f", &v_um[x]);

        printf("Digite outro número: ");
        scanf("%f", &v_dois[x]);

        v_tres[x] = v_um[x] * v_dois[x];

        printf("\n%.2f X %.2f = %.2f\n\n", v_um[x], v_dois[x], v_tres[x]);
    }


}

void aluno_media() {//5° questão

    float nota[10], media, soma = 0;

    for(int z = 0; z < 10; z++) {
        printf("Digite a %i° nota: ", z + 1);
        scanf("%f", &nota[z]);

        soma = soma + nota[z];
    }

    media = soma / 10;

    if( media >= 8 ) {
        printf("Turma aprovada\n");
        printf("Média: %.2f", media);
    } else if( media >= 6 ) {
        printf("Turma ficou de recuperação\n");
        printf("Média: %.2f", media);
    } else{
        printf("Turma reprovada kkkkkkkkkk\n");
        printf("Méida: %.2f", media);
    }

}

void menor_maior(void) { //essa aqui é a 4° questão e sinceramnete só conseguir fazer por coisa de uns vídeos que ensina a fazer o bubble sort
    int ordem[20], aux, flag;

    for(int x = 0; x < 20; x++) {
        printf("Digite o %i° número: ", x + 1);
        scanf("%i", &ordem[x]);
    }

    flag = 1;

    while(flag) {

        flag = 0;

        for(int x = 0; x <= 18; x++) {
            if(ordem[x] > ordem[x + 1]) {
                aux = ordem[x];
                ordem[x] = ordem[x + 1];
                ordem[x + 1] = aux;
                flag = 1;
            }
        }
    }

    for(int i = 0; i < 20; i++) {
        printf("\nOrdem %i: %i", i+1, ordem[i]);
    }

    printf("\n\nMenor: %i\n", ordem[0]);
    printf("Maior: %i", ordem[19]);
}

int main() {

    par_impar(); //1° questão
    soma_posicao(); //2° questão
    mult(); //3° questão
    menor_maior(); //4° questão
    aluno_media(); //5° questão

    return 0;
}