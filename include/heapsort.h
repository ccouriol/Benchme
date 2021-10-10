#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "../include/header.h"

float *heapsortAsc(float *array, int size);
float *heapsortDesc(float *array, int size);
void heapifyAsc(float arr[], int n, int i);
void heapifyDesc(float arr[], int n, int i);

#endif