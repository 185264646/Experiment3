#include <stdio.h>
#include <math.h>
_Bool is_selfpower(int);
int main(void)
{
	int digit, start, end;
	while(scanf("%d", &digit) == 1 && digit)
	{
		start = round(pow(10, digit - 1));
		end = start * 10;
		for (int i = start; i < end; i++)
		{
			if (is_selfpower(i))
				printf("%d ", i);
		}
		putchar('\n');
	}
	return 0;
}

_Bool is_selfpower(int num)
{
	int total = num;
	int length;
	char temp[11];
	sprintf(temp, "%d", num);
	length = strlen(temp);
	do
	{
		total -= round(pow(num % 10, length));
	}
	while (num /= 10);
	return !total;
}