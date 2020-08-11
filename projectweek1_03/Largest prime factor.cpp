#include<stdio.h>
void primeFactors(long long num)
{
	while (num % 2 == 0)
	{
		printf("%d ", 2);
		num = num / 2;
	}
	for (long long i = 3; i <= num / 2; i = i + 2)
	{
		while (num % i == 0)
		{
			printf("%lld ", i);
			num= num / i;
		}
	}
	if (num > 2)
	{
		printf("%lld ", num);
	}
}
int main()
{
	long long number = 0;
	scanf_s("%lld", &number);
	primeFactors(number);
	return 0;
}