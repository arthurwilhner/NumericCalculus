#include <stdio.h>
#include <locale.h>
#define max_i 50
#define max_j 50
#define max_v 50


void le_Matriz(double M[max_i][max_j], int order){
    printf("Ordem Digitada: %d\n", order);
    for (int i = 0; i<order;i++){
        for(int j=0;j<order;j++){
            printf("Digite o valor do elemento %d%d da Matriz:\n", i+1, j+1);
            scanf("%lf", &M[i][j]);
        }
    }
}

void imprime_Matriz(double M[max_i][max_j], int order){
    printf("A Matriz digitada foi: \n");
    for(int i=0;i<order;i++){
        for(int j=0;j<order;j++){
            printf("%.3lf\t", M[i][j]);
        }
        printf("\n\n");
    }
}

void le_Vet(double B[max_v], int order){
    printf("Digite o Vetor B:\n");
    for (int i=0; i<order; i++){
        scanf("%lf", &B[i]);
    }
}

void imprime_Vet(double B[max_v], int order){
    printf("O Vetor B digitado foi: \n");
    for(int i =0; i<order;i++){
        printf("%.3lf\t", B[i]);
    }
}

void sub_Retroativa(double M[max_i][max_j], double B[max_v], double A[max_v], int n){
    int cont_n, cont_m; // contador de linhas e colunas
    double soma;
    A[n - 1] = B[n - 1] / M[n - 1][n - 1];
    for (cont_n = n - 1; cont_n >= 1; cont_n--) {
        soma = 0;
        for (cont_m = cont_n + 1; cont_m <= n; cont_m++) {
            soma = soma + M[cont_n - 1][cont_m - 1] * A[cont_m - 1];
        }
        if (M[cont_n - 1][cont_n - 1] == 0) { // elemento da diagonal principal = 0
            if ((B[cont_n - 1] - soma) == 0) {
                printf("\nSistema compativel e indeterminado!\n");
                break;
            } else {
                printf("\nSistema incompativel!\n");
                break;
            }
        } else {
            A[cont_n - 1] = (B[cont_n - 1] - soma) / M[cont_n - 1][cont_n - 1];
        }
    }
}

int main() {
    int order;
    double M[max_i][max_j], B[max_v], A[max_v];

    printf("Digite a ordem do sistema:\n");
    scanf("%d", &order);
    // Função que lê a matriz
    le_Matriz(M, order);
    // Função que imprime a matriz digitada
    imprime_Matriz(M, order);
    // Função que lê o vetor
    le_Vet(B, order);
    // Função imprime vetor
    imprime_Vet(B, order);
    // Função Subs Retroativa
    sub_Retroativa(M, B, A, order);

    return 0;
}
/*
M =
3 2 -1
2 -2 4
-1 0.5 -1
B =
1
-2
0
 */