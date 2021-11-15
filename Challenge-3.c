#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
	int nbr;
	
	printf("Donner un nombre :\n");
	scanf("%d",&nbr);
	
	if(nbr%2==0)
	{
		printf("le nombre et Paire");
	}
	else   
	{
		printf("le nombre et impaire");
	}
	
	return 0;
}
