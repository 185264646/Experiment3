#include <stdio.h>
#include <math.h>
_Bool is_perfect_number(int); // return 1 if the given number is perfect
int main(void)
{
	for (int i = 2; i <= 10000; i++)
	{
		if (is_perfect_number(i))
		{
			printf("%d\n", i);
		}
	return 0;
}

_Bool is_perfect_number(int num)
{
	int sqrt_num = round(sqrt(num) + 1), sum = 1;
	for (int i = 2; i < sqrt_num; i++)
	{
		if ((num % i) == 0)
			sum += i + num / i;
	}
	if (sum == num)
		return 1;
	return 0;
}
