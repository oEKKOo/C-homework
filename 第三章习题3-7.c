/*������ϰ��3-7:��4λ�͵�4λ����*/
#include<stdio.h>
int main02()
{
	unsigned short int k,a,b,c=0x0ff0;
	scanf_s("%u", &k);
	a = k >> 12;
	b = k << 12;
	c = c & k;
	k = (a | b) | c;
	printf("%d\n", k);
	return 0;
}