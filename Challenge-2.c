#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float F,C;
	
	printf("Donner la temp en F :\n");
	scanf("%f",&F);
	
	C = (F-32)/1.8;
	
	if(C <0)
	{
		
		printf("la temperature est Tres froid");
	}
	
	else if(20<C>0)
	{
			printf("la temperature est froid");
	}

	else if(30<C>20)
	{
		printf("la temperature est chaud");
	}
	
	else 
	{
		printf("la temperature est tres chaud");
	}
	
	
	
	return 0;
}
