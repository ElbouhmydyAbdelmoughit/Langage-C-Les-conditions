#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NB,C;
    printf("Donner le nombre de annee :\n");
    scanf("%d",&NB);
    printf("1)Mois\n2)Jours\n3)Heurs\n4)Minutes\n5)Secondes\n");
    scanf("%d",&C);

    switch (C)
    {
    case 1:
        {
            printf("%d",NB*12);
            break;
        }

    case 2:
        {
            printf("%d",NB*12*30);
            break;
        }

    case 3:
        {
            printf("%d",NB*12*30*24);
            break;
        }

    case 4:
        {
            printf("%d",NB*12*30*24*60);
            break;
        }

    case 5:
        {
            printf("%d",NB*12*30*24*60*60);
            break;
        }
        
    
    default:
        break;
    }
    

    return 0;
}