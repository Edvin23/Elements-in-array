//Edvin Monzon
//CSC-321
//Lab #4

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(void)
{
	int i = 0;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	double b[5] = {0};
	double x = 10;

	for(i = 0; i < 10; i++)
	{
	//	int x = 0;
		printf("b[%d] = %d \n", i,a[i]);
		printf("b[%d] address = %p \n",i,a[i]);
	}

//	printf("b[%d] = %d \n", a[x]);
	return EXIT_SUCCESS;
}
