/* 实验3-1改错题程序：计算s=1!+2!+3!+…+n! */
#include <stdio.h>
long long sum_fac(int); // No prototype
long long fact(int);
int main(void)
{
	int k;
	for (k = 1; k <= 20; k++)
		printf("k=%d\tthe sum is %lld\n", k, sum_fac(k));
	return 0;
}

long long sum_fac(int n) // long long is not sufficient
{
	long long s = 0, fac = 1;
	int i; // Initialize fac
	for (i = 1; i <= n; i++)
	{
		s += fact(i); // this expression should be placed inside the for statement
	}
	return s;
}

long long fact(int n) // long is not sufficient
{
	if (n == 1) return 1;
	return n * fact(n - 1);
}

