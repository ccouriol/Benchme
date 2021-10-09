/*!
* \file header.c
* \author Clement Couriol
* \version 0.1
* \date 07/10/2021
* \brief Utils function
* \remarks None
* 
* 
* 
*/

/*! Importation of libraries*/
#include "../include/header.h"

/*!
* \fn void printArr(float *arr)
* \author Clement Couriol
* \version 0.1
* \date  07/10/2021
* \brief Print all values of a float array
* \remarks None
* \param arr 
*/
void printArr(float *arr, int size)
{
  for (int i = 0; i < size; i++)
    printf("%f | ", arr[i]);
}

void printArrCSV(float *arr, void *ptrFile, int size)
{
  for (int i = 0; i < size; i++)
    fprintf(ptrFile, "%f | ", arr[i]);
}

/*!
* \fn void swap(float *x, float *y)
* \author Clement Couriol
* \version 0.1
* \date  07/10/2021
* \brief Swap two float numbers
* \remarks None
* \param x 
* \param y 
*/
void swap(float *x, float *y)
{
  float temp = *x;
  *x = *y;
  *y = temp;
}

/*!
* \fn void generateArray(float *arr)
* \author Clement Couriol
* \version 0.1
* \date  07/10/2021
* \brief Puts pseudo random values in a float array
* \remarks None
* \param arr 
*/
void generateArray(float *arr, int size)
{
  srand(time(NULL));

  for (int i = 0; i < size; i++)
    arr[i] = ((float)rand() / (float)(RAND_MAX)) * MAXVAL;
}

/*!
* \fn void copyArray(float *arr, float *original)
* \author Clément Couriol
* \version 0.1
* \date  09/10/2021
* \brief Copy a float array to another float array
* \remarks None
* \param arr 
* \param original 
*/
void copyFloatArray(float *arr, float *original)
{
  for (int i = 0; i < SIZE; i++)
    arr[i] = original[i];
}