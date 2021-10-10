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
#include <time.h>

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
	if (argc != 2)
	{
		puts("Please put only/at least one argument");
		return EXIT_FAILURE;
	}

	FILE *ptrFile = fopen(argv[1], "w");

	if (ptrFile == NULL)
	{
		printf("%s cannot open", argv[1]);
		return EXIT_FAILURE;
	}

	fputs("Benchme;selectionAsc;selectionDesc;insertionAsc;insertionDesc;bubbleAsc;bubbleDesc\n", ptrFile);

	double average[4][8], timeSpent;
	int maxArraySize = 100;

	for (int arraySize = 10; arraySize < maxArraySize; arraySize *= 10)
	{
		clock_t begin, end;

		for (int j = 0; j < 3; j++)
		{
			float array[arraySize];
			generateArray(array, arraySize);
			printArr(array, arraySize);
			puts("---");

			begin = clock();
			selectionsortAsc(array, arraySize);
			end = clock();
			timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
			average[j][0] = timeSpent;

			begin = clock();
			selectionsortDesc(array, arraySize);
			end = clock();
			timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
			average[j][1] = timeSpent;

			begin = clock();
			insertionSortAsc(array, arraySize);
			end = clock();
			timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
			average[j][2] = timeSpent;

			begin = clock();
			insertionSortDesc(array, arraySize);
			end = clock();
			timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
			average[j][3] = timeSpent;

			begin = clock();
			bubbleSortAsc(array, arraySize);
			end = clock();
			timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
			average[j][4] = timeSpent;

			begin = clock();
			bubbleSortDesc(array, arraySize);
			end = clock();
			timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
			average[j][5] = timeSpent;

			// begin = clock();
			// heapSortAsc(array, arraySize);
			// end = clock();
			// timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
			// average[j][6] = timeSpent;

			// begin = clock();
			// heapSortDesc(array, arraySize);
			// end = clock();
			// average[j][7] = timeSpent;
			// timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
		}
		fprintf(ptrFile, "SIZE %i;", arraySize);

		for (int i = 0; i < 6; i++)
		{
			average[3][i] = (average[0][i] + average[1][i] + average[2][i]) / 3;
			fprintf(ptrFile, "%f;", average[3][i]);
		}
		fputs("\n", ptrFile);
	}

	if (fclose(ptrFile) == EOF)
	{
		printf("%s cannot close successfully", argv[1]);
		return EXIT_FAILURE;
	}

	return 0;
}
