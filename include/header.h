#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define SIZE 100
#define MAXVAL 10

void printArr(float *arr, int size);
void printArrCSV(float *arr, void *ptrFile, int size);
void swap(float *x1, float *x2);
void generateArray(float *arr, int size);
void copyFloatArray(float *arr, float *original);

#endif
