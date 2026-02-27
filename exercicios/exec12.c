#include <stdio.h>
#include <stdlib.h>

// Numeros par

int main() {

    for(int i = 1; i <=50; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}