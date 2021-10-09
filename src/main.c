/*!
* \file main.c
* \author Clement Couriol
* \version 0.1
* \date 07/10/2021
* \brief Main program
* \remarks None
* 
* 
* 
*/

/*! Importation of libraries*/
#include "../include/selectionsort.h"
#include "../include/header.h"
#include "../include/bubblesort.h"
#include "../include/heapsort.h"

/*!
* \fn int main(int argc, char **argv)
* \author Clement Couriol
* \version 0.1
* \date 07/10/2021
* \brief Main function of the program
* \remarks None
* \param argc number of arguments given as inputs
* \param argv value of arguments given as inputs
* \return 0 if all went good
*/
int main(int argc, char **argv)
{
	float array[SIZE];
	generateArray(array);

	float *arraySortAsc = heapsortAsc(array);
	float *arraySortDesc = heapsortDesc(array);

	printArr(array);
	puts("-----");
	printArr(arraySortAsc);
	puts("arraySortAsc^^");
	printArr(arraySortDesc);
	puts("arraySortDesc^^");

	float *selectArrAsc = selectionsortAsc(array);
	float *selectArrDesc = selectionsortDesc(array);

	puts("Tableau avec des valeurs aleatoires:");
	printArr(array);
	puts("-----");

	printArr(selectArrAsc);
	puts("Selection Asc^");

	printArr(selectArrDesc);
	puts("Selection Desc^");

	float *ptr_bb_asc = bubbleSortAsc(array);
	float *ptr_bb_dsc = bubbleSortDesc(array);

	puts("--> Tri à bulle croissant:");
	printArr(ptr_bb_asc);

	puts("--> Tri à bulle decroissant:");
	printArr(ptr_bb_dsc);

	return 0;
}
