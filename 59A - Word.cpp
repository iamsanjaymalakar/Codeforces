#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char s[120];
    cin >> s;
    int i=0,l=0,t;
    t=strlen(s);
    while(s[i])
    {
        if(s[i]>='a' && s[i]<='z')
            l++;
        i++;
    }
    if(l>=(t-l))
    {
        i=0;
        while(s[i])
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]=s[i]-'A'+'a';
            i++;
        }
    }
    else
    {
        i=0;
        while(s[i])
        {
            if(s[i]>='a' && s[i]<='z')
                s[i]=s[i]+'A'-'a';
            i++;
        }

    }
    cout << s << endl;
    return 0;
}
