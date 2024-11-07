/*第四章习题4.3：日期输入并显示第几天*/
#include<stdio.h>
int main04()
{
	int year, month, day,flag;
	scanf_s("%d %d %d", &year, &month, &day);
	if ((year % 4 == 0) && ((year % 100) != 0) || year % 400 == 0) {
		flag = 1;
	}
	else flag = 0;
	if (flag == 1)
	{
		switch (month)
		{
		case 1:printf("%d\n", day); break;
		case 2:printf("%d\n", day+31); break;
		case 3:printf("%d\n", day+60); break;
		case 4:printf("%d\n", day+91); break;
		case 5:printf("%d\n", day+121); break;
		case 6:printf("%d\n", day+152); break;
		case 7:printf("%d\n", day+182); break;
		case 8:printf("%d\n", day+213); break;
		case 9:printf("%d\n", day+244); break;
		case 10:printf("%d\n", day+274); break;
		case 11:printf("%d\n", day+305); break;
		case 12:printf("%d\n", day+335); break;
		}
	}
	if (flag == 0)
	{
		switch (month)
		{
		case 1:printf("%d\n", day); break;
		case 2:printf("%d\n", day + 31); break;
		case 3:printf("%d\n", day + 59); break;
		case 4:printf("%d\n", day + 90); break;
		case 5:printf("%d\n", day + 120); break;
		case 6:printf("%d\n", day + 151); break;
		case 7:printf("%d\n", day + 181); break;
		case 8:printf("%d\n", day + 212); break;
		case 9:printf("%d\n", day + 243); break;
		case 10:printf("%d\n", day + 273); break;
		case 11:printf("%d\n", day + 304); break;
		case 12:printf("%d\n", day + 334); break;
		}
	}
	return 0;
}
/*优化算法：用数组*/
#define N 13
int main0400001()
{
int year, month, day, flag,sum=0;
int a[N];
	scanf_s("%d %d %d", &year, &month, &day);
	if ((year % 4 == 0) && ((year % 100) != 0) || year % 400 == 0) {
		flag = 1;
	}
	else flag = 0;

	a[1] = a[3] = a[5] = a[7] = a[8] = a[10] = a[12] = 31;
	a[4] = a[6] = a[9] = a[11] = 30;
	if (flag == 1)a[2] = 29;
	else a[2] = 28;
	for (int i = 1; i <= month - 1; i++) {
		sum += a[i];
	}
	sum += day;
	printf("%d\n", sum);
	return 0;
}