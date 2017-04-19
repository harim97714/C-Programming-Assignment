//2번, 3번 합침
#include <stdio.h>
int main()
{
	int n = 0, i, count = 0;
	printf("임의의 수를 한 개 입력해주세요. ");
	scanf("%d", &n);
	printf("%d의 약수는 ", n);
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("이며, %d(은)는", n);
	if (count >= 3 || n == 1)
		printf("소수가 아닙니다.\n");
	else
		printf("소수가 맞습니다.\n");
	return 0;
}