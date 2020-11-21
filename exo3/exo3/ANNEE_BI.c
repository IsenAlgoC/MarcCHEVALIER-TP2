#include <stdio.h>
#include <stdlib.h>

int main() {

    /*********** programme a base d'une seule et unique expression logique ***********/

    int anneebi = 0;

    printf("Entrez une annee comprise entre 0 et 10000 (entier naturel!): ");
    scanf_s("%d", &anneebi);

    if ((anneebi % 4 == 0 && anneebi % 400 == 0 && anneebi % 100 == 0) || (anneebi % 4 == 0 && anneebi % 100 != 0)) {

        printf("\n%d est une annee bissextile!\n", anneebi);

    }
    else

        printf("\n%d n'est pas une annee bissextile!\n", anneebi);

    /********** programme a base de if et else ***********/

    int anneebis = 0;

    printf("\nEntrez une annee comprise entre 0 et 10000 (entier naturel!): ");
    scanf_s("%d", &anneebis);

    if (anneebis % 4 == 0) {

        if (anneebis % 100 == 0) {

            if (anneebis % 400 == 0)
                printf("\n%d est une annee bissextile!\n", anneebis);

            else
                printf("\n%d n'est pas une annee bissextile!\n", anneebis);
        }

        else
            printf("\n%d est une annee bissextile!\n", anneebis);

    }
    else
        printf("\n%d n'est pas une annee bissextile!\n", anneebis);

    return 0;
}