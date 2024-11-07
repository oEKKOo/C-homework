/*第十二章习题12-5：回文数判断*/
#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define re register 

char s[10005];
int flag = 1;
int l = 0;

void judge(char s[], int l, int r) // solution 1
{
    if (l + 1 == r)
    {
        if (s[l] != s[r]) flag = 0;
        return;
    }
    if (l == r) return;
    if (s[l] != s[r]) flag = 0;
    judge(s, l + 1, r - 1);
}

int IsPalindrom(char arr[], int len) // solution 2
{
    if (l + 1 == len)
    {
        if (s[l] != s[len]) return 0;
        return 1;
    }
    if (l == len) return 1;
    if (s[l] != s[len]) return 0;
    l++; IsPalindrom(arr, len - 1);
}

int main27()
{
    scanf("%s", s);
    // int cnt = strlen(s) ;
    // judge( s , 0 , cnt - 1 ) ;
    printf("%d\n", IsPalindrom(s, strlen(s) - 1));
    return 0;
}