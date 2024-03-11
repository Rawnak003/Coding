#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

class student
{
public :
    int id;
    double gpa;

    void setvalue(int x,double y)
    {
        id = x;
        gpa = y;
    }
    void display()
    {
        cout << " - " << id << " - " << gpa << endl;
    }
};

int main()
{
    while(1)
    {
        int x;
        double y;
        char name[20],c;

        cout << "Enter Name : ";
        gets(name);
        cout << "Enter ID : ";
        cin >> x;
        cout << "Enter CGPA : ";
        cin >> y;
        scanf("%c",&c);

        int len=strlen(name);
        student f;
        f.setvalue(x,y);

        cout << endl << name;
        f.display();
        cout << endl << endl;
    }
    return 0;
}
