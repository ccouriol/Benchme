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

	float *ascArr = selectionsortAsc(array);
	float *descArr = selectionsortDesc(array);
	printArr(array);
	puts("base^");
	printArr(ascArr);
	puts("Asc^");
	printArr(descArr);
	puts("Desc^");

	return 0;
}
