/*第四章习题4-9Fibonacci数列的输出*/
/*函数法*/
#include<stdio.h>
int main06()
{
	int k, cnt = 0; long Fibonacci(int n);
	printf("Input the number:");
	scanf_s("%d", &k);
	for (int i = 1; i <= k; i++) {
		printf("%6d", Fibonacci(i));
		if (++cnt == 8) { putchar('\n'); cnt = 0; }
	}
	return 0;
}
long Fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}
/*数组法*/
#define maxn 1005
int main060000001()
{
	int n;
	int a[maxn];
	scanf_s("%d", &n);
	a[1] = a[2] = 1;
	for (int i = 3; i <= n; i++)
		a[i] = a[i - 1] + a[i - 2];
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		printf("%6d", a[i]);
		if(++cnt==8)
		{
			putchar('\n'); cnt = 0;
		}
	}
	return 0;
}
