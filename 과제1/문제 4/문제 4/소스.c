#include <stdio.h>
int main()
{
	int n, i, j, count = 2;
	printf("임의의 수를 한 개 입력해주세요. ");
	scanf("%d", &n);
	printf("%d까지의 모든 소수는 ", n);
	while (count < n)
	{
		j = 1;
		for (i = 2; i < count; i++)
		{
			if (count%i == 0)
			{
				j = 0;
				break;
			}
		}
		if (j == 1)
			printf("%d ", count);
		count++;
	}
	printf("\n");
	return 0;
}