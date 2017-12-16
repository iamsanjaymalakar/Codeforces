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
#include <ctime>

using namespace std;

int ccc;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define ull unsigned long long
#define inf 1e9
#define sf(a) scanf("%d",&a);
#define sf2(a, b) scanf("%d %d",&a,&b);
#define sf3(a, b, c) scanf("%d %d %d",&a,&b,&c);
#define pf printf
#define mset(a, b) memset(a,b,sizeof(a))
#define itf it->first
#define its it->second

int s[100],e[100];
bool f[100];
int ans[100];

int check(int d)
{
    int p=1;
    REP(i,d)
    {
        if(!f[i+1])
        {
            p=0;
        }
    }
    return p;
}

int main()
{
    int d,sumTime;
    cin >> d >> sumTime ;
    FOR(i,1,d)
    {
        cin >> s[i] >> e[i];
    }
    FOR(i,1,d)
    {
        ans[i]=s[i];
        sumTime-=ans[i];
    }
    if(sumTime<0)
    {
        cout << "NO" << endl;
        return 0;
    }
    int i=0;
    while(sumTime)
    {
        i=i%d+1;
        if(ans[i]!=e[i])
        {
            ans[i]++;
            sumTime--;
        }
        if(ans[i]==e[i])
        {
            f[i]=true;
        }
        if(check(d))
            break;
    }
    if(sumTime!=0)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    FOR(i,1,d)
    {
        cout << ans[i] <<  " ";
    }

}

/*
2 5
0 1
3 5
 */
