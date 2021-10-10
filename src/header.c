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
* \fn void printArr(float *arr, int size)
* \author Clement Couriol
* \version 0.1
* \date  07/10/2021
* \brief Print all values of a float array
* \remarks None
* \param arr 
* \param size
*/
void printArr(float *arr, int size)
{
  for (int i = 0; i < size; i++)
    printf("%f | ", arr[i]);
}

/*!
* \fn void printArrCSV(float *arr, void *ptrFile, int size)
* \author Cédric Gabette
* \version 0.1
* \date  10/10/2021
* \brief 
* \remarks None
* \param arr 
* \param ptrFile 
* \param size 
*/
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
* \fn void generateArray(float *arr, int size, int i)
* \author Clement Couriol
* \version 0.1
* \date  07/10/2021
* \brief Puts pseudo random values in a float array
* \remarks None
* \param arr 
* \param size
* \param i
*/
void generateArray(float *arr, int size, int i)
{
  srand(time(NULL) * i);

  for (int i = 0; i < size; i++)
    arr[i] = ((float)rand() / (float)(RAND_MAX)) * MAXVAL;
}

/*!
* \fn void copyFloatArray(float *arr, float *original, int size)
* \author Clément Couriol
* \version 0.1
* \date  09/10/2021
* \brief Copy a float array to another float array
* \remarks None
* \param arr 
* \param original 
* \param size
*/
void copyFloatArray(float *arr, float *original, int size)
{
  for (int i = 0; i < size; i++)
    arr[i] = original[i];
}

/*!
* \fn char *replaceChar(char *str, char find, char replace)
* \author Clément Couriol
* \version 0.1
* \date  10/10/2021
* \brief Replace a char in a string by another char
* \remarks None
* \param str 
* \param find 
* \param replace 
* \return 
*/
char *replaceChar(char *str, char find, char replace)
{
  char *current_pos = strchr(str, find);
  while (current_pos)
  {
    *current_pos = replace;
    current_pos = strchr(current_pos, find);
  }
  return str;
}
