/*������ϰ��5-12-3���õݹ�ʵ���������*/
#include <stdio.h>
#include <string.h>
#define maxn 10005
char s[maxn];
void inverse(int num, char s[])
{
	if (num == 0)
	{
		printf("%c", s[num]);
		return;
	}
	printf("%c", s[num]);
	inverse(num - 1, s);
}
int main11()
{
	scanf_s("%s", s,10005);
	inverse(strlen(s)-1 , s);
	return 0;
}