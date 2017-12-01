#include<bits/stdc++.h>
using namespace std;
const int maxn = 510;
long long a[maxn][maxn];

int main()
{
    int n,x,y;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            scanf("%lld",&a[i][j]);
            if(a[i][j]==0)x=i,y=j;
        }
    if(n==1)
    {
        printf("1");
        return 0;
    }
    int ax=1;
    while(ax==x)ax++;
    long long sum = 0;
    for(int i=1;i<=n;i++)
        sum+=a[ax][i];
    long long tmp=0;
    for(int i=1;i<=n;i++)
        tmp+=a[x][i];
    a[x][y]=sum-tmp;
    if(a[x][y]<=0)
    {
        printf("-1\n");
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        tmp=0;
        for(int j=1;j<=n;j++)
            tmp+=a[i][j];
        if(tmp!=sum)
        {
            printf("-1\n");
            return 0;
        }
    }
    for(int j=1;j<=n;j++)
    {
        tmp=0;
        for(int i=1;i<=n;i++)
            tmp+=a[i][j];
        if(tmp!=sum)
        {
            printf("-1\n");
            return 0;
        }
    }
    tmp = 0;
    for(int i=1;i<=n;i++)
        tmp+=a[i][i];
    if(tmp!=sum)
    {
        printf("-1\n");
        return 0;
    }
    tmp=0;
    for(int i=1;i<=n;i++)
        tmp+=a[i][n-i+1];
    if(tmp!=sum)
    {
        printf("-1\n");
        return 0;
    }
    printf("%lld\n",a[x][y]);
}
