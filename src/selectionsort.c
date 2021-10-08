/*!
* \file selectionsort.c
* \author Clement Couriol
* \version 0.1
* \date 07/10/2021
* \brief Selection sort algorithm
* \remarks None
* 
* 
* 
*/

/*! Importation of libraries*/
#include "../include/selectionsort.h"
#include "../include/header.h"

/*!
* \fn float *selectionsortAsc(float *array)
* \author Clement Couriol
* \version 0.1
* \date  07/10/2021
* \brief Sort ascendingly a float array with selection algorithm
* \remarks None
* \param array 
* \return 
*/
float *selectionsortAsc(float *array)
{
  int minIdx = 0;
  float *ptrArray = (float *)malloc(sizeof(float) * SIZE);
  for (int i = 0; i < SIZE; i++)
    ptrArray[i] = array[i];

  for (int i = 0; i < SIZE; i++)
  {
    // index of the minimum value +1 to swap
    minIdx = i;
    for (int j = i + 1; j < SIZE; j++)
    {
      //if we find a smaller value we memorize it
      if (ptrArray[j] < ptrArray[minIdx])
        minIdx = j;
      // then we swap the minimum value at the minIdx
      swap(&ptrArray[minIdx], &ptrArray[i]);
    }
  }

  return ptrArray;
}

/*!
* \fn float *selectionsortDesc(float *array)
* \author Clement Couriol
* \version 0.1
* \date  07/10/2021
* \brief Sort descendingly a float array with selection algorithm
* \remarks None
* \param array 
* \return 
*/
float *selectionsortDesc(float *array)
{
  int minIdx = 0;
  float *ptrArray = (float *)malloc(sizeof(float) * SIZE);
  for (int i = 0; i < SIZE; i++)
    ptrArray[i] = array[i];

  for (int i = 0; i < SIZE; i++)
  {
    minIdx = i;
    for (int j = i + 1; j < SIZE; j++)
    {
      if (ptrArray[j] > ptrArray[minIdx])
        minIdx = j;

      swap(&ptrArray[minIdx], &ptrArray[i]);
    }
  }

  return ptrArray;
}