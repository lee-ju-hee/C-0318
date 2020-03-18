#include <stdio.h>
void squ1()
{
	unsigned char a1 = 0xa1;
	unsigned char a2 = 0xe1;
	int i;
	for(i=1; i<5; i++)
	{
		printf("%c%c", a1, a2);
	}
	printf("\n");
}

void squ2()
{
	unsigned char b1 = 0xa1;
	unsigned char b2 = 0xe1;
	int j;
	for(j=1; j<3; j++)
	{
		printf("%c%c", b1, b2);
	}
	printf("\n");
}
int main()
{
	squ1();
	squ2();
	squ2();
	squ1();
	return 0;
}
