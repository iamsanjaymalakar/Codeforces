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
#define pf printf



int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
   string s,t;
   cin >> s >> t;
   int ans=max(abs(s[0]-t[0]),abs(s[1]-t[1]));
   cout << ans << endl;
   while(s!=t)
   {
       if(s[0]<t[0])
       {
           cout << "R";
           s[0]++;
       }
       else if(s[0]>t[0])
       {
           cout << "L";
           s[0]--;
       }
       if(s[1]<t[1])
       {
           cout << "U";
           s[1]++;
       }
       else if(s[1]>t[1])
       {
           cout << "D";
           s[1]--;
       }
       cout << endl;
   }

}

/*
a8
h1
*/


