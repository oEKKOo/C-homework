/*�ڰ���ϰ��8-7�ߵ�����*/
#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 6 //�궨��N Ϊ6������� N ����6 ������
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
//���庯��
void inv(int* x, int n)
{
	/*
	x Ϊ������Ԫ�أ�ָ�� i ָ�������һ��Ԫ�أ�ָ�� j ָ���������һ��Ԫ�� ��
	ָ�� p Ϊ������м�Ԫ�أ��м��Ԫ�ز��ý�����
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