#include <stdio.h>

int main(void)
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		(void)scanf("%d", arr[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}