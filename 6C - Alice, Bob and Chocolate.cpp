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
#include <sstream>

using namespace std;

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


int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    int a[n];
    REP(i,n)
        cin >> a[i];
    int i=0,j=n-1;
    int ca=0,cb=0;
    while(i<=j)
    {
        if(i==j && ca==cb)
        {
            ca+=a[i++];
            break;
        }
        if(ca>cb)
        {
            cb+=a[j--];
        }
        else if(ca<cb)
        {
            ca+=a[i++];
        }
        else
        {
            ca+=a[i++];
            cb+=a[j--];
        }
    }
    cout << i << " " << n-i << endl;
}


