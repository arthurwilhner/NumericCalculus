#include <stdio.h>
#include <stdlib.h>

int main() {
    int fat, n=3;
    for(fat=1;n>1;n--){
        fat = fat*n;
    }
    printf("%d\n", fat);
}
