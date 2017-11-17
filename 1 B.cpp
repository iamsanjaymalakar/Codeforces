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

string numToAlpha(int num)
{
    string ans("");
    int m=26;
    while(num>0)
    {
        char t='Z';
        if(num%m==0)
        {
            num-=m;
        }
        else
        {
            t='A'+(num%m)-1;
        }
        num/=m;
        ans=t+ans;
    }
    return ans;
}

int alphaToNum(string s)
{
    int ans=0,m=26;
    REP(i,s.length())
    {
       ans = ans*m + s[i]-'A'+1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    REP(t,n)
    {
        string s;
        cin >> s;
        if(s[0]>='A' && s[0]<='Z' && s[1]>='A' && s[1]<='Z')
        {
            int i=0;
            string c("");
            while(s[i]>='A' && s[i]<='Z')
            {
                c=c+s[i];
                i++;
            }
            int r=0;
            while(s[i])
            {
                r=r*10+s[i]-'0';
                i++;
            }
            cout << "R" << r << "C" << alphaToNum(c) << endl;
        }
        else
        {
            int i=1;
            int r=0,c=0;
            while(s[i]!='C')
            {
                c=c*10+s[i]-'0';
                i++;
            }
            i++;
            while(s[i])
            {
                r=r*10+s[i]-'0';
                i++;
            }
            cout << numToAlpha(r) << c << endl;
        }
    }
}

/*
2
R23C55
BC23
*/


