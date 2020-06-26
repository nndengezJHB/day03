#include <stdio.h>

int main()
{
	char str[] = "test";
	int count = 0;
	int i = 0;
	while(str[i] != '\0')
	{
		count++;
		i++;
	}
	printf("Number of characters in string in %d\n", count);
	return 0;
}

