#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

	/***********  Valeur max Unsigned Short Int ***********/

	printf("la valeur maximum est: %d\n", USHRT_MAX);

	/* La valeur maximum pour n est donc 361 si l'on ne souhaite pas dépasser cette valeur... */
	int max = 361;

	/***********  Boucle for  ***********/

	int i = 0, somme0 = 0, n = 0;

	printf("\nEntrer la valeur de n pour la boucle FOR (nombre entier) : ");
	scanf_s("%d", &n);

	while (n > max) {
		printf("\nEntrer une valeur valable de n pour la boucle FOR (nombre entier inferieur a 361!) : ");
		scanf_s("%d", &n);
	}

	for (i = 0; i <= n; i++) {

		somme0 += i;
	}

	printf(" \nLa valeur de n est : %d\nLa somme des n nombres entiers vaut %d\n", n, somme0);

	/***********  boucle while  ***********/

	int j = 0, m = 1, somme1 = 0, valmax = 0;

	printf("\nEntrer la valeur de n pour la boucle WHILE (nombre entier) : ");
	scanf_s("%d", &m);

	while ((j < m) && (USHRT_MAX - somme1) >= j) {
		j += 1;
		somme1 += j;
		valmax++;

	}

	printf(" \nLa valeur de n est : %d\nLa valeur maximum de n pour ne pas depasser la valeur est : %d\nLa somme des n nombres entiers vaut %d (sans depasser la valeur maximum)\n", m, valmax, somme1);


	/***********  boucle do-while  ***********/

	int k = 0, p = 0, somme2 = 0;

	printf("\nEntrer la valeur de n pour la boucle DO-WHILE (nombre entier) : ");
	scanf_s("%d", &p);

	do {

		k++;
		somme2 += k;

	} while (k < p);

	printf(" \nLa valeur de n est : %d\nLa somme des n nombres entiers vaut %d\n", p, somme2);


	/*********** On remarque ici et dans toutes les boucles que si l'on ne note pas un entier naturel pour n,
	alors la valeurs sera arrondie à l'entier naturel inférieur le plus proche! ***********/

}