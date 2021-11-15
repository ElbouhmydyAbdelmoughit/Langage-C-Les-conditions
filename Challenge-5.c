#include <stdio.h>

	int main()
	{
		int a,b;
		
		printf("donner les 2 nombres entier :\n");
		scanf("%d %d",&a,&b);
		
		int Somme = a+b;
		if (a==b)
		{
			int Ssomme = Somme*3;
			printf("le resultat finale est %d :",Ssomme);
		}
		else
		{
			printf("la somme de a + b est :%d",a+b);
		}
		
	 return 0;
	}
