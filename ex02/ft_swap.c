#include <stdio.h>

void ft_swap(void)
{
int a1 = 5;
int b1 = 9;
int *a = &a1;
int *b = &b1;
printf("%d%d\n", *b, *a);
}

int main()
{
	ft_swap();
	return 0;
}
