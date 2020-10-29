#include <stdio.h>
#include <stdlib.h>

float x, many;
int   i;
int main(void)
{
	

	for (i =1; i<16; i++)
	{
		x = i * 0.005 + 0.01;
		many = 5000 * x;
		
	}
	printf("%f", many);
	
	system("pause");
	return 0;
}
	
	