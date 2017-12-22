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
    string s[1005];
    int maxLength=-inf;
    int cnt=0;
    while(!cin.eof())
    {
        getline(cin,s[cnt]);
        int len= s[cnt].length();
        if(len>maxLength)
            maxLength=len;
        cnt++;
    }
    cnt--;
    int lr=0;
    REP(i,cnt)
    {
        int len=s[i].length();
        if(len==maxLength)
            s[i]="*"+s[i]+"*";
        else
        {
            string temp="*";
            int c=maxLength-len;
            int l=c/2;
            int r=c-l;
            if(lr%2)
            {
                swap(l,r);
            }
            if(l!=r)
                lr++;
            REP(j,l)
                temp=temp+" ";
            temp=temp+s[i];
            REP(j,r)
                temp=temp+" ";
            temp=temp+"*";
            s[i]=temp;
        }
    }
    //cout << cnt << endl;
    REP(i,maxLength+2)
    {
        cout << '*';
    }
    cout << endl;
    REP(i,cnt)
    {
        cout << s[i] << endl;
    }
    REP(i,maxLength+2)
    {
        cout << '*';
    }
    cout << endl;

}


