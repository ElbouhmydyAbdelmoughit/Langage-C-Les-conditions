#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	/*Challenge_1*/
	
	int nbr;
	
	printf("Donner un nombre entier  :\n");
	scanf("%d",&nbr);
	
     if(nbr <0)
    	printf("Le nombre nbr est negatif ");
    	
	 else if(nbr>0)
    	 printf("le nombre nbr est Positif");
    	 
    else 
	printf("le nombre nbr est nul");	 
	 
	
	 
	return 0;
}
