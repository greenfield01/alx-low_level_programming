#include <stdlin.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
	srand(time(0));
	n = rand - MAX / 2;

	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	elseif(n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
