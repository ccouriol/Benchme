#include "header.h"

void generateArray(float *array)
{
    //Générateur de nombres aléatoires
    srand((unsigned int)time(NULL));

    //On rempli un tableau de valeurs aleatoires, qu'on va ensuite récupérer dans le main avec 'monTab'.
    for (int i = 0; i < SIZE; i++)
        array[i] = ((float)rand() / (float)(RAND_MAX)) * MAX_VAL;
}
