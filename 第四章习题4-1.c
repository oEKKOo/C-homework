/*第4章习题4-1：学生成绩的输出*/
#include<stdio.h>
int main03()
{
	int a, b, c;
	//printf("输入A,B,C三个学生的成绩：");
	scanf_s("%d %d %d", &a, &b, &c);
	
	if (a > b)
		if (b > c) printf("B %d", b);
		else if (a > c) printf("C %d", c); 
		else  printf("A %d", a);
	if (a < b)
		if (b < c) printf("B %d", b);
		else if (a > c) printf("A %d", a);
		else  printf("C %d", c);
	if (a == b )
		printf("A %d", a);
	
	return 0;
}