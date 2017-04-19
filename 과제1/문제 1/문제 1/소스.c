#include <stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	for (i; i <= 1000; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("3의 배수의 총합은 %d\n", sum);
	return 0;
}