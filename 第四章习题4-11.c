/*������ϰ��4-11�����Լ������С������*/
#include<stdio.h>
int main08()
{
	int a, b,MAX,MIN;
	scanf_s("%d %d", &a, &b);
	for (MAX = a;; MAX--) {               //forѭ����
		if (a % MAX == 0 && b % MAX == 0)
			break;
	}MIN = a * b / MAX;
	//MIN = a * b ;
	//while (a % b != 0) {         //շת�����
	//	MAX = a % b;
	//	a = b;
	//	b = MAX;
	//}
	//MIN /=  MAX;
	printf("%d %d", MAX,MIN);
	return 0;
}