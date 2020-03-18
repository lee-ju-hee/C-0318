#include<stdio.h>
void cir()
{
	unsigned char a1 = 0xa1;
	unsigned char a2 = 0xe2;
	
	printf("%c%c", a1, a2);
}
int main()
{
	int i;
	int j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			cir();
		}
		printf("\n");	
	}
	return 0;
}
