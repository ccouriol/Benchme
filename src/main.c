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
#include "../include/insertionsort.h"

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

	float *selectArrAsc = selectionsortAsc(array);
	float *selectArrDesc = selectionsortDesc(array);

	float *ptrInsertAsc = insertionSortAsc(array);
	float *ptrInsertDesc = insertionSortDesc(array);

	float *ptr_bb_asc = bubbleSortAsc(array);
	float *ptr_bb_dsc = bubbleSortDesc(array);

	puts("Tableau avec des valeurs aleatoires:");
	printArr(array);
	puts("-----");

	printArr(ptrInsertAsc);
	puts("Insertion Asc^");

	printArr(ptrInsertDesc);
	puts("Insertion Desc^");

	printArr(selectArrAsc);
	puts("Selection Asc^");

	printArr(selectArrDesc);
	puts("Selection Desc^");
	
	printArr(ptr_bb_asc);
	puts("Bubble Asc^");

	printArr(ptr_bb_dsc);
	puts("Bubble Desc^");

	return 0;
}
