/*������ϰ��3-5:�ַ��������������*/
#include<stdio.h>
int main01()
{
	char c;
	scanf_s("%c", &c);
	if (c >= 'a' && c <= 'f' || c >= 'A' && c <= 'F')
	{
		if (c >= 'a' && c <= 'f')
			c = c - 87;
		else
			c = c - 55;
	printf("%d\n", c);
	}
	else putchar(c);

		
	return 0;

}