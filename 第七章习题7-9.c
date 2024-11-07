/*第七章习题7-9：字符计数*/
#include<stdio.h>
#include<string.h>
#define N 10005
int main15()
{
	int num=0, letter=0, others=0,len;
	char a[N];
	scanf_s("%s", a,10005);
	len = strlen(a);
	for (int i = 0; i < len; i++) {
		if (a[i] >= '0' && a[i] <= '9')
			num += 1;
	  else if (a[i] >= 'A' && a[i] < 'Z' || a[i] >= 'a' && a[i] <= 'z')
			letter++;
		else others++;
	}
	printf("%d %d %d", num, letter, others);
	return 0;
}