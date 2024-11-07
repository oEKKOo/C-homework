/*第八章习题8-7颠倒数组*/
#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 6 //宏定义N 为6，下面的 N 都是6 的替身。
int main19()
{
	int p;
	scanf("%d", &p);
	void inv(int* x, int n);
	int a[N];
	int i;
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	inv(a, N);
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	return 0;
}
//定义函数
void inv(int* x, int n)
{
	/*
	x 为数组首元素，指针 i 指向数组第一个元素，指针 j 指向数组最后一个元素 。
	指针 p 为数组的中间元素，中间的元素不用交换。
	*/
	int* i, * j, t, * p;
	i = x, j = x + n - 1, p = x + (n - 1) / 2;
	for (; i <= p; i++, j--)
	{
		t = *i;
		*i = *j;
		*j = t;
	}
}