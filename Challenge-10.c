#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tmp;

    printf("Donner Un Temperature : \n");
    scanf("%d",&tmp);

    if (tmp <= 0)
    {
        printf("Glace\n");
    }

    else if (tmp <= 100)
    {
        printf("Eau\n");
    }

    else
    {
        printf("Vapeur\n");
    }
    

    return 0;
}