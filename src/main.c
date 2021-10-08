/*--------------------Bubble sort code-------------------------
*
*Principe du code :
*On parcours le tableau sans rétro-action et on compare un terme avec son homologue de droite, on vérifie la condition a<b ou a>b
*et on inverse leur position lorsque la condition n'est pas vérifié. On reparcours de nouveau le tableau jusqu'a qu'il n'y ait
*plus d'erreurs de conditions.
*/

#include <stdio.h>
#include <stdlib.h>
#include "bubblesort.h"
#include "header.h"
#include "insertionsort.h"

int main()
{
	float montab[SIZE];
	
	//On remplit le tableau de valeurs aléatoires
	generateArray(montab);

	// float *ptr_insertion = insertion(montab);

	float *ptr_bb_asc = bubbleSortAsc(montab);
	float *ptr_bb_dsc = bubbleSortDesc(montab);

	printf("Tableau avec des valeurs aleatoires :\n\n");

	//Pour afficher la création du tableau
	for (long int i = 0; i < SIZE; i++) 
	{
		printf(" %.5f |", *montab);
		(*montab)++;
	}

	printf("\n--> Tri à bulle croissant:\n");

	for (long int i = 0; i < SIZE; i++)
	{
		printf(" %.5f |", *ptr_bb_asc);
		ptr_bb_asc++;
	}
	printf("\n");

	printf("\n--> Tri à bulle decroissant:\n");

	for (long int i = 0; i < SIZE; i++)
	{
		printf(" %.5f |", *ptr_bb_dsc);
		ptr_bb_dsc++;
	}
	printf("\n");

	/*	##TODO
	long int *ptr_insert = insertion_sort(montab);

	printf("\n--> Tri à insertion :\n");

	for (long int i = 0; i < SIZE; i++) //Pour afficher le tableau trié avec un tri à bulle
	{
		printf(" %lu |", *ptr_insert);
		ptr_insert++;
	}
	printf("\n");
	*/
	return 0;
}
