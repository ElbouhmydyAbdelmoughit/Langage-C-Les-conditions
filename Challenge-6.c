#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    float a,b,c ,Delta,E,x1,x2;

    printf("Donner les 3 nombers a et b et c : \n");
    scanf("%f %f %f",&a,&b,&c);

    Delta = pow(b,2) -(4*a*c);

    if(Delta<0)
    {
        printf("Cette equation n'est pas de solution");

    }
    else if(Delta = 0)
    {
        printf("la solution de Cette equation ets x");

        E = -b/(2*a);

        printf("la resultat de x est : %f",E);
    }
    else
    
    {
        printf("les solutions de cette equation x1 et x2 \n");

        x1 =( -b - sqrt(Delta))/(2*a);
        x2 = (-b + sqrt(Delta))/(2*a);

        printf("le resultat de x1 est :%f \n",x1);
        printf("le resultat de x2 est :%f",x2);
    }

    return 0;
}