#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char a[2];
    cin >> a;
    if(!strcmp(a,"a1") || !strcmp(a,"a8") || !strcmp(a,"h1") || !strcmp(a,"h8") )
        cout << 3 << endl;
    else if(a[0]=='a' || a[0]=='h' || a[1]=='1' || a[1]=='8')
        cout << 5 << endl;
    else
        cout << 8 << endl;
    return 0;
}
