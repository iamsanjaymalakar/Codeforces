#include<stdio.h>

int main()
{
    int r,i,j;
    scanf("%d",&r);
    char c[r][5];
    for(i=0; i<r; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf(" %c",&c[i][j]);
        }
    }
    int f=0,res[2];
    for(i=0;i<r;i++)
    {
        if(f)
            break;
        for(j=0;j<4;j=j+3)
        {
            if(c[i][j]==c[i][j+1] && c[i][j]=='O')
            {
                f=1;
                res[0]=i;
                res[1]=j;
                break;
            }
        }

    }
    if(f)
    {
        c[res[0]][res[1]]='+';
        c[res[0]][res[1]+1]='+';
    }
    if(f)
        printf("YES\n");
    else
        printf("NO\n");
    if(f)
    {
    for(i=0; i<r; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%c",c[i][j]);
        }
        printf("\n");
    }
    }

}
