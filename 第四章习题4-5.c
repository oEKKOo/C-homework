/*������ϰ��4-5���������������*/
#include<stdio.h>
int main05()
{
	double a, b;
	char c;
	scanf_s("%lf%lf %c", &a, &b, &c);
	if (c == '+')printf("%.6lf", a + b);
	if (c == '-')printf("%.6lf", a - b);
	if (c == '*')printf("%.6lf", a * b);
	if (c == '/') {
		if (!b)printf("Error");
		else printf("%.6lf", a / b);
	}
	if(c=='&') printf("Error");
	return 0;
}