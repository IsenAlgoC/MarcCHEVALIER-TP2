#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int my_rand(int min, int max)
{
    srand((unsigned)time(NULL));             //utilisation d'une valeur aléatoire 

    return (int)(min + (max - min) * (float)rand() / (float)RAND_MAX);
}


int main() {

    
    int max = 100, min = 0;
    int compteur = 1, nombreadeviner = my_rand(min, max), nombreattente = 0;

    /* le programme compte le nombre d'essais !*/

    do
    {
        printf("Quel est le nombre ? ");
        scanf_s("%d", &nombreattente);

        if (nombreadeviner == nombreattente) {

            printf("compteur = %d\n", compteur);
            printf("felicitation!!!  \n\n");

        }

        else if (nombreadeviner > nombreattente) {

            compteur += 1;
            printf("Trop petit... \n");

        }

        else if (nombreadeviner < nombreattente) {

            compteur += 1;
            printf("Trop grand... \n");

        }

    } while (nombreattente != nombreadeviner);

    return 0;
}