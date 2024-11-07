/*第七章习题7-8：数组划分交换*/
#include<stdio.h>
#define N 1005
int main14()
{
	int n, k;
	int u[N];
	scanf_s("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &u[i]);
	for (int i = 0; i < n - k; i++)
		printf("%d ", u[k+i]);
	for (int i = 0; i < k; i++)
		printf("%d ", u[i]);
	return 0;
}