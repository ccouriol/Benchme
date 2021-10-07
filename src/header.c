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
void printArr(float *arr)
{
  for (int i = 0; i < SIZE; i++)
    printf("%f\n", arr[i]);
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

//TODO: Use pseudo random numbers
//TODO: Use better predetermined numbers for parsing sorting clarity
/*!
* \fn float *generateArray(float *arr)
* \author Clement Couriol
* \version 0.1
* \date  07/10/2021
* \brief Puts pre calculated values in a float array
* \remarks None
* \param arr 
* \return 
*/
void generateArray(float *arr)
{
  float value = 1815483.158123, temp = 1;
  for (int i = 0; i < SIZE; i++, temp++)
    arr[i] = value - temp * temp * 2;
}