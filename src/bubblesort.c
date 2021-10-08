/*!
* \file bubblesort.c
* \author Cédric Gabette
* \version 0.1
* \date 08/10/2021
* \brief 
* \remarks None
* 
* 
* 
*/



/*! Importation of librairies*/
#include "bubblesort.h"
#include "header.h"

/*!
* \fn float *bubbleSortAsc(float *param)
* \author Cédric Gabette
* \version 0.1
* \date  08/10/2021
* \brief Référence un tri avec un tri un bulle sur des valeur aléatoires.
* \remarks None
* \param param 
* \return 
*/
float *bubbleSortAsc(float *param)
{
    //On alloue en mémoire de l'espace pour notre tableau
    float *tab = (float *)malloc(sizeof(float) * SIZE);
    int i, ending;
    float swap;

    //On copie les valeurs
    for (i = 0; i < SIZE; i++)
    {
        tab[i] = *param;
        param++;
    }

    //Algo de tri : On compare le terme de gauche avec son voisin de droite on
    //compare et on inverse leur position si la condition n'est pas vérifié.
    //On va parcourir plusieurs fois le tableau jusqu'a qu'on n'ai plus d'erreur de condition
    while (1)
    {
        for (i = 0; i < SIZE - 1; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                swap = tab[i + 1];
                tab[i + 1] = tab[i];
                tab[i] = swap;
                ending = 0;
            }
            else
            {
                //On incrémente 'ending' à chaque fois que la condition est vérifié
                ending++;
            }

            if (ending == SIZE)
            {
                return tab;
            }
        }
    }
}

/*!
* \fn float *bubbleSortDesc(float *param)
* \author Cédric Gabette
* \version 0.1
* \date  08/10/2021
* \brief 
* \remarks None
* \param param 
* \return 
*/
float *bubbleSortDesc(float *param)
{
    //On alloue en mémoire de l'espace pour notre tableau
    float *tab = (float *)malloc(sizeof(float) * SIZE);
    int i, ending;
    float swap;

    //On copie les valeurs
    for (i = 0; i < SIZE; i++)
    {
        tab[i] = *param;
        param++;
    }
    
    //Algo de tri : On compare le terme de gauche avec son voisin de droite on
    //compare et on inverse leur position si la condition n'est pas vérifié.
    //On va parcourir plusieurs fois le tableau jusqu'a qu'on n'ai plus d'erreur de condition
    while (1)                          
    {                                  
        for (i = 0; i < SIZE - 1; i++) 
        {
            if (tab[i + 1] > tab[i])
            {
                swap = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = swap;
                ending = 0;
            }
            else
            {
                //On incrémente 'ending' à chaque fois que la condition est vérifié
                ending++;
            }

            if (ending == SIZE)
            {
                return tab;
            }
        }
    }
}
