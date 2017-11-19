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



int main()
{
    int n;
    cin >> n;
    map<string,int> mp;
    string s;
    int a;
    string ss[n];
    int aa[n];
    set<string> winners;
    REP(t,n)
    {
        cin >> s >> a;
        ss[t]=s;
        aa[t]=a;
        if(mp.count(s)==0)
        {
            mp[s]=a;
        }
        else
        {
            mp[s]+=a;
        }
    }
    int mn=-inf;
    for (map<string,int>::iterator it=mp.begin(); it!=mp.end(); ++it)
    {
        if(it->second>mn)
        {
            mn=it->second;
            winners.clear();
            winners.insert(it->first);
        }
        else if(it->second==mn)
        {
            winners.insert(it->first);
        }
    }

    map<string,int> mp2;
    string ans;
    REP(i,n)
    {
        if(mp2.count(ss[i])==0)
        {
            mp2[ss[i]]=aa[i];
        }
        else
        {
            mp2[ss[i]]+=aa[i];
        }
        if(mp2[ss[i]]>=mn && winners.count(ss[i])>=1)
        {
            ans=ss[i];
            break;
        }
    }
    cout << ans << endl;

}

/*
15
aawtvezfntstrcpgbzjbf 681
zhahpvqiptvksnbjkdvmknb -74
aawtvezfntstrcpgbzjbf 661
jpdwmyke 474
aawtvezfntstrcpgbzjbf -547
aawtvezfntstrcpgbzjbf 600
zhahpvqiptvksnbjkdvmknb -11
jpdwmyke 711
bjmj 652
aawtvezfntstrcpgbzjbf -1000
aawtvezfntstrcpgbzjbf -171
bjmj -302
aawtvezfntstrcpgbzjbf 961
zhahpvqiptvksnbjkdvmknb 848
bjmj -735
*/


