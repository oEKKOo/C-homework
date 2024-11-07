/*第七章习题7-7：选择法排序*/
#include<stdio.h>
#define N 1005
/*数组法*/
int main13()
{
	int n, a[N],t=0,i,j;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	for (int i = 0; i < n; i++) 
	{
	for(int j=i+1;j<n;j++)
		if (a[i] > a[j]) {
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
}
/*指针法*/
//#include <stdio.h>
//#define re register
//#define maxn 100005
//int n;
//int a[maxn], b[maxn];
//int max(int x, int y)
//{
//    return x > y ? x : y;
//}
//void swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int main()
//{
//    scanf("%d", &n);
//    for (re int i = 1; i <= n; i++)
//        scanf("%d", a + i);
//    for (re int i = 1; i <= n; i++)
//    {
//        int maxx = i;
//        for (re int j = i + 1; j <= n; j++)
//        {
//            if (a[j] < a[maxx]) maxx = j;
//        }
//        swap(&a[i], &a[maxx]);
//    }
//    for (re int i = 1; i <= n; i++)
//        printf("%d ", a[i]);
//    return 0;
//}