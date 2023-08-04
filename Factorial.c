#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define e 2.7182818284590452
double res;

double fatorial (int n){
    double fat;
    if(n == 0) fat++;
    for(fat=1;n>1;n--) {
         fat = n * fat;
     }
    return fat;
};

double eulere (double n){
    for(int num=0;num<n;num++){
        res = res + 1/ fatorial(num);
        printf("%.20f\n", e-(res+1));
    }
};

int main() {
    eulere(20);
}
