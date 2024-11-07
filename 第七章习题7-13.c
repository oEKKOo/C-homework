/*µÚÆßÕÂÏ°Ìâ7-13£º±àĞ´strncpy(s,t,n)*/
#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
char* my_strncpy(char* dest, const char* src, int num)
{
	char* tmp = dest;
	while (num && (*dest++ = *src++))
	{
		num--;
	}
	if (num)
	{
		while (num--)
		{
			*dest++ = '\0';
		}
	}
	return tmp;
}
int main16()
{
	int num = 0;
	char arr1[10] = { '\0' };
	char arr2[10] = { '\0' };
	scanf("%s", arr1);
	scanf("%s", arr2);
	scanf("%d", &num);
	char* ret = my_strncpy(arr1, arr2, num);
	printf("%s\n", ret);
}
