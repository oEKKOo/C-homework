/*第七章习题7-15：十六进制数转换*/
#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#define maxn 10005
int n;
char s[maxn];
int change(char c)
{
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    else if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    else return c - '0';
}
int main17()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", s);
        int cnt = strlen(s), ans = 0, tmp = 0;
        for (int i = cnt - 1; i > 1; i--)
            ans += change(s[i]) * pow(16, tmp++);
        printf("%d ", ans);
    }
    return 0;
}