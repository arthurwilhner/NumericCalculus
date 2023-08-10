#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define e 2.7182818284590452
double res, rel;


double fatorial (int n){
    double fat;
    if(n == 0) fat++;
    for(fat=1;n>1;n--) {
         fat = n * fat;
     }
    return fat;
};

double eulere (double n){
    FILE *arq = fopen("euler.txt", "w");

    if(arq == NULL){
        printf("Impossível abrir o arquivo");
        return 0;
    }

    for(int num=0;num<n;num++){
        res = res + 1/fatorial(num);
        rel = res/e;
        fprintf(arq, "%.20f ", e - (res));
        fprintf(arq, "%.20f\n", rel);
    }
    printf("\nGravado corretamente!");
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    eulere(20);
}
