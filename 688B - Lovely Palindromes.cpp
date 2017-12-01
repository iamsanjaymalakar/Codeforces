#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdio.h>

using namespace std;
char a[1000005];
int main()
{
    while(~scanf("%s",a))
    {
        int len=strlen(a);
        for(int i=0;i<len;i++)
        {
            printf("%c",a[i]);
        }
        for(int i=len-1;i>=0;i--)
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
