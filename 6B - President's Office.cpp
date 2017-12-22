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

map<char,bool> mp;

int main()
{
    int r,c;
    char p;
    cin >> r >> c >> p;
    char room[r][c];
    REP(i,r)
        REP(j,c)
            cin >> room[i][j];
    int ans=0;
    mp[p]=true;
    mp['.']=true;
    REP(i,r)
        REP(j,c)
        {
            if(room[i][j]==p)
            {
                if(j+1<c)
                {
                    if(!mp[room[i][j+1]])
                        {
                            ans++;
                            mp[room[i][j+1]]=true;
                        }
                }
                if(j-1>=0)
                {
                    if(!mp[room[i][j-1]])
                    {
                        ans++;
                        mp[room[i][j-1]]=true;
                    }
                }
                if(i+1<r)
                {
                    if(!mp[room[i+1][j]])
                    {
                        ans++;
                        mp[room[i+1][j]]=true;
                    }
                }
                if(i-1>=0)
                {
                    if(!mp[room[i-1][j]])
                    {
                        ans++;
                        mp[room[i-1][j]]=true;
                    }
                }
            }
        }
    cout << ans << endl;
    return 0;
}
