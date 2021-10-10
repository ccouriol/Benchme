#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// #define SIZE 100
#define MAXVAL 1000000

void printArr(float *arr, int size);
void printArrCSV(float *arr, void *ptrFile, int size);
void swap(float *x1, float *x2);
void generateArray(float *arr, int size, int i);
void copyFloatArray(float *arr, float *original, int size);
char *replaceChar(char *str, char find, char replace);

#endif
