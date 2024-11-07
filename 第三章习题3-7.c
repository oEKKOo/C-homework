/*第三章习题3-7:高4位和低4位交换*/
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