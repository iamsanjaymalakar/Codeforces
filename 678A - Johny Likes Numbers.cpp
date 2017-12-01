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

int n,k;

int main()
{
    cin >> n >> k;
    int b=n-n%k;
    cout << b+k;
}
