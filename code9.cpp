#include<iostream>
#include<string>
using namespace std;
int main()
{
    char r;
    string k;
    cin >> k;
    int l=k.length();
    for(int j=0;j<l;j++)
    {
        k[j]=tolower(k[j]);
    }
    for(int i=0;i<l;i++)
    {
        if(k[i]=='a'||k[i]=='e'||k[i]=='i'||k[i]=='o'||k[i]=='u'||k[i]=='y')
        {
            r=k[i];
        }
        else
        {
            cout << "." << k[i];
        }
    }
    return 0;
}