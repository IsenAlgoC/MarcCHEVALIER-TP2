#include <stdlib.h>
#include <stdio.h>



int main() {
    unsigned int largeur = 0, hauteur = 0, profondeur = 0, test = 0, grand = 0, moyen = 0, petit = 0;
    do {
        do {
            printf("Enter la largeur, (comprise entre 0 et 150 cm) :");
            scanf_s("%d", &largeur);

        } while (largeur > 150 || largeur < 1);


        do {
            printf("Enter la hauteur, (comprise entre 0 et 150 cm) :");
            scanf_s("%d", &hauteur);
        } while (hauteur > 150 || hauteur < 1);


        do {
            printf("Enter la profondeur (comprise entre 0 et 150 cm) :");
            scanf_s("%d", &profondeur);



        } while (profondeur > 150 || profondeur < 1);


        if (largeur > hauteur && largeur > profondeur) {
            grand = largeur;
            if (hauteur > profondeur) {
                moyen = hauteur;
                petit = profondeur;
            }
            else {
                moyen = profondeur;
                petit = hauteur;
            };
        }
        else if (hauteur > largeur && hauteur > profondeur) {
            grand = hauteur;
            if (largeur > profondeur) {
                moyen = largeur;
                petit = profondeur;
            }
            else {
                moyen = profondeur;
                petit = largeur;
            };
        }
        else {
            grand = profondeur;
            if (largeur > hauteur) {
                moyen = largeur;
                petit = hauteur;
            }
            else {
                moyen = hauteur;
                petit = largeur;
            }
        }

        if (grand < 56 && moyen < 36 && petit < 26) {
            printf("\n          COLIS VALIDE !");
        }
        else {
            printf("\n          COLIS NON VALIDE...");
        };


        printf("\n\nSi vous souhaitez essayer d'entrer un autre colis taper 1, si vous avez fini taper 0 ...\n");
        scanf_s("%d", &test);

    } while (test != 0);


}