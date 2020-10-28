#include <stdio.h>
#include <limits.h>
#include <math.h>
void print_if_Goldbachnum(unsigned);
_Bool is_prime(unsigned);
int main(void)
{
	unsigned num;
	while (scanf("%u", &num) == 1 && num >= 4 && num % 2 == 0)
		print_if_Goldbachnum(num);
	puts("Good bye!");
	return 0;
}

void print_if_Goldbachnum(unsigned num)
{
	for (unsigned i = 3; i < num; i += 2)
	{
		if (is_prime(i) && is_prime(num - i))
		{
			printf("%u = %u + %u", num, i, num - i);	
			break;
		}
	}
}

_Bool is_prime(unsigned num)
{
	unsigned sqrt_num = round(sqrt(num)) + 1;
	for (unsigned i = 2; i < sqrt_num; i++)
	{
		if (!(num % i))
			return 0;
	}
	return 1;
}