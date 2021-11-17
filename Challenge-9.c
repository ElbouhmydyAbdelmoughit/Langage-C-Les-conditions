#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr ;

    printf("Taper la moyenne de eleve : \n");
    scanf("%d",&nbr);

    if (nbr < 10)
    {
        printf("pas de mention  \n");
    }

    else if (  nbr  <12 )
    {
        printf("la mention Est Passable \n");
    }

    else if (nbr < 14)
    {
        printf("la mention Est Assez bien \n");
    }

    else if (nbr < 16)
    {
        printf("la mention Est Bien \n");
    }

     else 
    {
        printf("la mention Est Tres bien \n");
    }
    

    return 0;
}