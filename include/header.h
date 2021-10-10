#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4
#define MAXVAL 1000

void printArr(float *arr);
void printArrCSV(float *arr, void *ptrFile);
void swap(float *x1, float *x2);
void generateArray(float *arr);

#endif
