/*!
* \file heapsort.c
* \author Clément Couriol
* \version 0.1
* \date 09/10/2021
* \brief Heap sort algorithm
* \remarks None
* 
* 
* 
*/

/*! Importation of libraries*/
#include "../include/heapsort.h"
#include "../include/header.h"

/*!
* \fn void heapifyAsc(float arr[], int n, int i)
* \author Clément Couriol
* \version 0.1
* \date  09/10/2021
* \brief 
* \remarks None
* \param arr 
* \param n 
* \param i 
*/
void heapifyAsc(float arr[], int n, int i)
{
  long int largest = i;
  int leftChild = 2 * i + 1;
  int rightChild = 2 * i + 2;

  if (leftChild < n && arr[leftChild] > arr[largest])
    largest = leftChild;

  // If right child is larger than largest so far
  if (rightChild < n && arr[rightChild] > arr[largest])
    largest = rightChild;

  // If largest is not root
  if (largest != i)
  {
    swap(&arr[i], &arr[largest]);

    // Recursively heapify the affected sub-tree
    heapifyAsc(arr, n, largest);
  }
}

/*!
* \fn void heapifyDesc(float arr[], int n, int i)
* \author Clément Couriol
* \version 0.1
* \date  09/10/2021
* \brief 
* \remarks None
* \param arr 
* \param n 
* \param i 
*/
void heapifyDesc(float arr[], int n, int i)
{
  long int largest = i;
  int leftChild = 2 * i + 1;
  int rightChild = 2 * i + 2;

  if (leftChild < n && arr[leftChild] < arr[largest])
    largest = leftChild;

  // If right child is smaller than largest so far
  if (rightChild < n && arr[rightChild] < arr[largest])
    largest = rightChild;

  if (largest != i)
  {
    swap(&arr[i], &arr[largest]);

    heapifyDesc(arr, n, largest);
  }
}

/*!
* \fn float *heapsortAsc(float *array, int size)
* \author Clément Couriol
* \version 0.1
* \date  09/10/2021
* \brief Sort ascendingly a float array with heap algorithm 
* \remarks None
* \param array 
* \param size
* \return 
*/
float *heapsortAsc(float *array, int size)
{
  float *ptrArray = (float *)malloc(sizeof(float) * size);
  copyFloatArray(ptrArray, array, size);

  for (int i = size / 2 - 1; i >= 0; i--)
    heapifyAsc(ptrArray, size, i);

  // One by one extract an element from heap
  for (int i = size - 1; i > 0; i--)
  {
    // Move current root to end
    swap(&ptrArray[0], &ptrArray[i]);

    // call max heapify on the reduced heap
    heapifyAsc(ptrArray, i, 0);
  }

  return ptrArray;
}

/*!
* \fn float *heapsortDesc(float *array, int size)
* \author Clément Couriol
* \version 0.1
* \date  09/10/2021
* \brief Sort descendingly a float array with heap algorithm
* \remarks None
* \param array 
* \param size
* \return 
*/
float *heapsortDesc(float *array, int size)
{
  float *ptrArray = (float *)malloc(sizeof(float) * size);
  copyFloatArray(ptrArray, array, size);

  for (int i = size / 2 - 1; i >= 0; i--)
    heapifyDesc(ptrArray, size, i);

  for (int i = size - 1; i > 0; i--)
  {
    swap(&ptrArray[0], &ptrArray[i]);
    heapifyDesc(ptrArray, i, 0);
  }

  return ptrArray;
}