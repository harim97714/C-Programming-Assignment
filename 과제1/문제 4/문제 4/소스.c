#include <stdio.h>
int main()
{
	int n, i, j, count = 2;
	printf("������ ���� �� �� �Է����ּ���. ");
	scanf("%d", &n);
	printf("%d������ ��� �Ҽ��� ", n);
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