//
// Created by Jack on 27/12/2024.
//

#include "myFunctions.h"
#include <stdio.h>

void creaAlbero(int altezza) {
    for (int riga = 1; riga <= altezza; riga++) {
        for (int spazio = 1; spazio <= altezza - riga; spazio++) {
            printf(" ");
        }

        printf("*");


        if (riga > 1 && riga < altezza) {
            for (int interno = 1; interno <= (2 * riga - 3); interno++) {
                printf(" ");
            }
            printf("*");
        } else if (riga == altezza) {
            for (int interno = 1; interno < (2 * riga - 1); interno++) {
                printf("*");
            }
        }
        printf("\n");
    }


    for (int tronco = 0; tronco < altezza / 2; tronco++) {
        for (int spazio = 1; spazio < altezza; spazio++) {
            printf(" ");
        }
        printf("|\n");
    }
}
