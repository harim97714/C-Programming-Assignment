#include <stdio.h>
int main()
{
	int star, cnt;
	for (star = 1; star <= 36; star++)
	{
		printf("*");
		if (star % 12 == 0)
			printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 2; i++)
	{
		for (cnt = 1; cnt <= 6; cnt++)
		{
			for (star = 1; star <= cnt; star++)
				printf("*");
			printf("\n");
		}
		printf("\n");
	} //메일에 똑같은 모양이 두 개가 있어 두 번 출력
	for (cnt = 1; cnt <= 9; cnt += 2)
	{
		for (star = 1; star <= cnt; star++)
			printf("*");
		printf("\n");
	}
}