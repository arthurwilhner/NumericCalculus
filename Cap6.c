#include <stdio.h>

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

void gaussSeidel(int n, double A[max_i][max_j], double maxIter, double tol, double x[max_v], double b[max_v]){
    int i, j, k;
    double erro, sum, xant[max_v];
    while ((k<maxIter) && (erro>=tol)){
        erro=0;
        for(i=1;i<=n;i++){
            xant[i-1]=x[i-1];
            sum = 0;
            for(j=1;j<=n;j++){
                if(j != i){
                    sum = sum + A[i-1][j-1]*x[j-1];
                }
            }
            x[i-1] = (b[i-1]-sum)/A[i-1][i-1];
            if((x[i-1]-xant[i-1]) > erro){
                erro = (x[i-1]-xant[i-1]);
            }
        }
        printf("\nIteração = %d erro = %lf", k, erro);
        k = k+1;
    }
    if(erro >= tol){
        printf("\nNão houve convergencia em %f iterações", maxIter);
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
    // Gauss Seidel
    gaussSeidel(order, M, 100, 0.001, A, B);
    //Vetor A
    printf("\nVetor X:\n");
    imprime_Vet(A, order);
    printf("\n\n");
    return 0;
}
/* exemplo
3
10
2
1
1
-15
1
2
3
10
7
32
6
0
0
0

-- exerc. 1
4
4
1
1
1
2
-8
1
-1
1
2
-5
1
1
1
1
-4
7
-6
-1
-1
0
0
0
0

-- exerc. 2
4
5
-1
2
-1
1
9
-3
4
0
3
-7
2
-2
2
-3
10
5
26
-7
33
1
3
1
3

*/