

#include "../include/insertionsort.h"
#include "../include/header.h"

float *insertionSortAsc(float *param)
{
    float *tab = (float *)malloc(sizeof(float) * SIZE); //On alloue en mémoire de l'espace pour notre tableau
    float mem;
    int i;

    for (i = 0; i < SIZE; i++) //On rempli notre tableau des valeurs pseudo-aléatoires
    {
        tab[i] = *param;
        param++;
    }

    for (i = 0; i < SIZE; i++)
    {

        mem = tab[i];                      //On met en mémoire le 1er terme, puis le 2nd dans la seconde boucle, etc...
        while (mem < tab[i - 1] && i >= 0) //On compare si le terme actuel est plus petit que le terme précédent
        {
            tab[i] = tab[i - 1]; //On déplace de 1 vers la droite toutes les valeurs
            i--;
        }

        tab[i] = mem;
    }

    return tab;
}

//*****************Décroissant

float *insertionSortDesc(float *param)
{
    float *tab = (float *)malloc(sizeof(float) * SIZE); //On alloue en mémoire de l'espace pour notre tableau
    float mem;
    int i;

    for (i = 0; i < SIZE; i++) //On rempli notre tableau des valeurs pseudo-aléatoires
    {
        tab[i] = *param;
        param++;
    }

    for (i = 0; i < SIZE; i++)
    {

        mem = tab[i];
        int j = i - 1;                 //On met en mémoire le 1er terme, puis le 2nd dans la seconde boucle, etc...
        while (mem > tab[j] && j >= 0) //On compare si le terme actuel est plus petit que le terme précédent
        {
            tab[j + 1] = tab[j]; //On déplace de 1 vers la droite toutes les valeurs
            j--;
        }

        tab[j + 1] = mem;
    }

    return tab;
}