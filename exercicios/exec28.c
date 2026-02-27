#include <stdio.h>
#include <stdlib.h>

int main () {

    float v1[5];

    for(int i = 0; i < 5; i++) {
        printf("\n Digite o valor de %d: ", i + 1);
        scanf("%f", &v1[i]);
        
    } 
    
    for(int i = 0; i < 5; i++) {
        printf("v1[%d] = %.2f\n", i, v1[i]);
    }

    return 0;
}