/*������ϰ��6-4������꽻��x,y*/
#include<stdio.h>
#define swap(x,y) t=x,x=y,y=t
int main12()
{
	int x,t, y;
	scanf_s("%d%d", &x, &y);
	swap(x, y);
	printf("%d %d", x, y);
	return 0;
}