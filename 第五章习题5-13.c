/*������ϰ��5-13���ض���������n���������k������*/
/*���������*/
#include<stdio.h>
#include<math.h>
int digit(int n, int k)
{
	int c = pow(10, k - 1), d;
	int a = -1;
	d = n % c;
	if (d == n)
		printf("%d", a);
	if (d != n) {
		d = n / c; 
		if (d > 10)d = d % 10;
		printf("%d", d);
	}
}
int main10()
{
	int n, k;
	scanf_s("%d %d", &n, &k);
	digit(n, k);
	return 0;
}
/*��������*/
//#include <stdio.h>
//#include <string.h>
//
//#define maxn 1005
//int k;
//char s[maxn];
//
//int digit(char s[], int k)
//{
//	int cnt = strlen(s);
//	if (k > cnt) return -1;
//	else return (s[cnt - k] - '0');
//}
//
//int main()
//{
//	scanf_s("%s %d", s,1005, &k);
//	printf("%d\n", digit(s, k));
//	return 0;
//}