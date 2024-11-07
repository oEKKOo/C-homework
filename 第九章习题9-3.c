/*Ï°Ìâ9-3*/
#include<stdio.h>
#define N 13
int main20()
{
	int year, month, day, flag, sum = 0;
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
	if ((flag == 0) && (month == 2) && (day >= 29))printf("error");

	else	printf("%d\n", sum);
	return 0;
}