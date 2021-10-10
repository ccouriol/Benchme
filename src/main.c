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
	FILE *ptrFile = fopen("/home/dricks/dev/c/Benchme/sort.csv", "w");

	if (ptrFile == NULL)
	{
		puts("sort.csv cannot open");
		return EXIT_FAILURE;
	}

	float array[SIZE];
	generateArray(array);

	float *selectArrAsc = selectionsortAsc(array);
	float *selectArrDesc = selectionsortDesc(array);

	float *ptrInsertAsc = insertionSortAsc(array);
	float *ptrInsertDesc = insertionSortDesc(array);

	float *ptr_bb_asc = bubbleSortAsc(array);
	float *ptr_bb_dsc = bubbleSortDesc(array);

	puts("Tableau avec des valeurs aleatoires:");
	fputs("Tableau avec des valeurs aleatoires:\n", ptrFile);
	printArr(array);
	printArrCSV(array, ptrFile);
	puts("-----");
	fputs("-----\n", ptrFile);

	printArr(ptrInsertAsc);
	printArrCSV(ptrInsertAsc, ptrFile);
	puts("Insertion Asc^");
	fputs("Insertion Asc^\n", ptrFile);

	printArr(ptrInsertDesc);
	printArrCSV(ptrInsertDesc, ptrFile);
	puts("Insertion Desc^");
	fputs("Insertion Desc^\n", ptrFile);

	printArr(selectArrAsc);
	printArrCSV(selectArrAsc, ptrFile);
	puts("Selection Asc^");
	fputs("Selction Asc^\n", ptrFile);

	printArr(selectArrDesc);
	printArrCSV(selectArrDesc, ptrFile);
	puts("Selection Desc^");
	fputs("Selection Desc^\n", ptrFile);

	printArr(ptr_bb_asc);
	printArrCSV(ptr_bb_asc, ptrFile);
	puts("Bubble Asc^");
	fputs("Bubble Asc^\n", ptrFile);

	printArr(ptr_bb_dsc);
	printArrCSV(ptr_bb_dsc, ptrFile);
	puts("Bubble Desc^");
	fputs("Bubble Desc^\n", ptrFile);

	if (fclose(ptrFile) == EOF)
	{
		puts("sort.csv cannot close successfully");
		return EXIT_FAILURE;
	}

	return 0;
}
