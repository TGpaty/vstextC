#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, c;
	
	int x;
	x = scanf("%f%f%f", a, b, c);
	if (x != 3)
	{
		printf("�������\n");
		exit(0);
	}

	return EXIT_SUCCESS;
}
