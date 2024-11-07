/*第六章习题6-4：定义宏交换x,y*/
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