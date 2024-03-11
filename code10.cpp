#include<iostream>
#include<string>
using namespace std;
int main()
{
    int m=0;
    string a;
    string b;
    cin >> a;
    cin >> b;
    int l1=a.length();
    int l2=b.length();
    if(l1==l2)
    {
        for(int i=0;i<l1;i++)
        {
            a[i]=tolower(a[i]);
        }
        for(int i=0;i<l2;i++)
        {
            b[i]=tolower(b[i]);
        }
        for(int j=0;j<l1;j++)
        {
            if(a[j]!=b[j])
            {
                m=a[j]-b[j];
                break;
            }
        }
        if(m<0){
            cout << "-1";
        }
        else if(m>0){
            cout << "1";
        }
        else{
            cout << "0";
        }
    }
    return 0;
}