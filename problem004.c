#include <stdio.h>

int isPalindrome (int n)
{
	int aa = n, bb = 0;

	while (n != 0)
	{
		bb = bb * 10 + (n % 10);
		n /= 10;
	}

	return aa == bb;
}

int main ()
{
	int max[3];
	max[0] = 0;
	int b = 0;

	for (int a = 100; a < 1000; a++)
	{
		b = a;
		for (;b < 1000; b++)
		{
			if (isPalindrome(a * b) && (a * b) > max[0])
			{
				max[0] = a * b;
				max[1] = a;
				max[2] = b;
			}
		}
	}

	printf("%d * %d = %d\n", max[1], max[2], max[0]);

	return 0;
}
