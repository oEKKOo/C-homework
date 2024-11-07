/*第四章习题4-11求最大公约数和最小公倍数*/
#include<stdio.h>
int main08()
{
	int a, b,MAX,MIN;
	scanf_s("%d %d", &a, &b);
	for (MAX = a;; MAX--) {               //for循环法
		if (a % MAX == 0 && b % MAX == 0)
			break;
	}MIN = a * b / MAX;
	//MIN = a * b ;
	//while (a % b != 0) {         //辗转相除法
	//	MAX = a % b;
	//	a = b;
	//	b = MAX;
	//}
	//MIN /=  MAX;
	printf("%d %d", MAX,MIN);
	return 0;
}