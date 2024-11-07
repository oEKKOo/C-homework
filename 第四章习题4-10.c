/*第四章习题4-10计算Π的近似值*/
/*for循环法*/
#include <stdio.h>
#include<math.h>
int main07()
{
	double pi=0, i = 1.0, sign = -1.0;
		for (i = 1.0; (fabs(1 / i) > 1e-5);i+=2)
		{
			 sign *= (-1);
			pi += sign / i;
			
		}
		
		printf("%lf", pi * 4);
		return 0;
}
/*while循环*/
#include <stdio.h>
#include <math.h>

#define re register

double pi = 0, tmp = 1.0, sign = -1.0;

int main07000001()
{
	while (fabs(1 / tmp) > 1e-5)
	{
		sign *= (-1);
		pi += sign / tmp;
		tmp += 2;
	}
	printf("%lf", pi * 4);
	return 0;
}