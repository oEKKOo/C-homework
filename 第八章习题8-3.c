/*µ⁄∞À’¬œ∞Ã‚8-3£∫√∞≈›≈≈–Ú÷∏’Î∞Ê*/
#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_sort(int* a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (*(a + i) > *(a + j))
			{
				int temp;
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
	/*	for(i = 0;i < n;i++)
		{
			printf("%d\t",*(a+i));
		}
	*/
}
void print(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(a + i));
	}
	printf("\n");
}
int main18()
{
	int a[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	bubble_sort(a, 5);
	print(a, 5);
	return 0;
}
