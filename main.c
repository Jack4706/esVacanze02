#include <stdio.h>
#include "myFunctions.h"

int main() {
    int altezza;

    printf("Inserisci la grandezza dell'albero:\n");
    scanf("%d", &altezza);

    if (altezza < 2) {
        printf("Grandezza troppo bassa.\n");
    } else {
        creaAlbero(altezza);
    }
    return 0;
}
