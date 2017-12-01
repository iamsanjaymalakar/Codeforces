#include<iostream>

using namespace std;

int main()
{
    int n,c;
    cin >> n >> c;
    int counter=0,a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]<=c)
            counter++;
        else
            counter=0;
    }
    cout << counter+1 << endl;
}
