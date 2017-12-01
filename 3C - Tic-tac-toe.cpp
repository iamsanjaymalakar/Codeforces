//============================================================================
// Author       : Sanjay Malakar
//============================================================================

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;


#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define ull unsigned long long
#define inf 1e9
#define sf(a) scanf("%d",&a);
#define sf2(a,b) scanf("%d %d",&a,&b);
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define pf printf
#define mset(a,b) memset(a,b,sizeof(a))
#define itf it->first
#define its it->second

char a[10];
int cx,c0;
int fx,f0;

int main()
{
    REP(i,9)
    {
        cin >> a[i+1];
        if(a[i+1]=='X')
            cx++;
        if(a[i+1]=='0')
            c0++;
    }
    if(c0>cx)
    {
        cout << "illegal" << endl;
        return 0;
    }
    else if((cx-c0)>1)
    {
        cout << "illegal" << endl;
        return 0;
    }
    for(int i=1;i<=9;i=i+3)
    {
        if(a[i]=='X' && a[i+1]=='X' && a[i+2]=='X')
        {
            fx=1;
        }
    }
    for(int i=1;i<=3;i++)
    {
        if(a[i]=='X' && a[i+3]=='X' && a[i+6]=='X')
        {
            fx=1;
        }
    }
    if((a[1]=='X' && a[5]=='X' && a[9]=='X') || (a[3]=='X' && a[5]=='X' && a[7]=='X'))
    {
        fx=1;
    }
    for(int i=1;i<=9;i=i+3)
    {
        if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='0')
        {
            f0=1;
        }
    }
    for(int i=1;i<=3;i++)
    {
        if(a[i]=='0' && a[i+3]=='0' && a[i+6]=='0')
        {
            f0=1;
        }
    }
    if((a[1]=='0' && a[5]=='0' && a[9]=='0') || (a[3]=='0' && a[5]=='0' && a[7]=='0'))
    {
        f0=1;
    }
    if(fx && f0)
    {
        cout << "illegal" << endl;
        return 0;
    }
    else if(fx && !((cx-1)==c0))
    {
    	cout << "illegal" << endl;
    	return 0;
    }
    else if(f0 && !(c0==cx))
    {
        cout << "illegal" << endl;
        return 0;
    }
    else if(fx)
    {
        cout << "the first player won" << endl;
        return 0;
    }
    else if(f0)
    {
        cout << "the second player won" << endl;
        return 0;
    }
    if(cx+c0==9)
    {
        cout << "draw" << endl;
        return 0;
    }
    if(cx>c0)
    {
        cout << "second" << endl;
        return 0;
    }
    else
    {
        cout << "first" << endl;
        return 0;
    }

}

/*
XXX
X00
X00
*/
