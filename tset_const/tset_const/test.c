#include <stdio.h>
int main()
{
	const int b = 10;
	int *p = &b;
	*p = 20;
	printf("b = %d",b);
	

	return 0;
}