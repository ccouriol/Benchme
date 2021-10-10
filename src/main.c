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
#include "../include/heapsort.h"
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

	fputs("Benchme;selectionAsc;selectionDesc;insertionAsc;insertionDesc;bubbleAsc;bubbleDesc;heapAsc;heapDesc\n", ptrFile);

	double average[4][8], timeSpent;
	int maxArraySize = 1000;

	for (int arraySize = 10; arraySize <= maxArraySize; arraySize *= 10)
	{
		clock_t begin, end;

		for (int j = 0; j < 3; j++)
		{
			float array[arraySize];
			generateArray(array, arraySize, j);

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

			begin = clock();
			heapsortAsc(array, arraySize);
			end = clock();
			timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
			average[j][6] = timeSpent;

			begin = clock();
			heapsortDesc(array, arraySize);
			end = clock();
			timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
			average[j][7] = timeSpent;
		}
		fprintf(ptrFile, "SIZE %i;", arraySize);

		for (int i = 0; i < 8; i++)
		{
			char buffer[64];
			average[3][i] = (average[0][i] + average[1][i] + average[2][i]) / 3;
			snprintf(buffer, sizeof buffer, "%f", average[3][i]);
			replaceChar(buffer, '.', ',');
			fprintf(ptrFile, "%s;", buffer);
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
