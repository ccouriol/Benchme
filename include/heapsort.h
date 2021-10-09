#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "../include/header.h"

float *heapsortAsc(float *array);
float *heapsortDesc(float *array);
void heapifyAsc(float arr[], int n, int i);
void heapifyDesc(float arr[], int n, int i);

#endif