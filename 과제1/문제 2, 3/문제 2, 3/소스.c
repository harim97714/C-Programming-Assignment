//2��, 3�� ��ħ
#include <stdio.h>
int main()
{
	int n = 0, i, count = 0;
	printf("������ ���� �� �� �Է����ּ���. ");
	scanf("%d", &n);
	printf("%d�� ����� ", n);
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("�̸�, %d(��)��", n);
	if (count >= 3 || n == 1)
		printf("�Ҽ��� �ƴմϴ�.\n");
	else
		printf("�Ҽ��� �½��ϴ�.\n");
	return 0;
}