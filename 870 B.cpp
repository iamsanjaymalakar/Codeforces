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

const int mn=1e5+5;
int a[mn],b[mn];

int main()
{
    int n,k;
    cin >> n >> k;
    REP(i,n)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    if(k==1)
    {
        cout << a[0] << endl;
    }
    else if(k>=3)
    {
        cout << a[n-1] << endl;
    }
    else if(k==2)
    {
         cout<<(b[0]<b[n-1]?b[n-1]:b[0])<<endl;
    }
}
