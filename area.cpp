#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Menu :" << endl;
    cout << "1.Triangle" << endl;
    cout << "2.Rectangle" << endl;
    cout << "3.Trapezium" << endl;
    cout << "4.Circle" << endl;
    cout << "5.Square" << endl;
    cout << "6.Parallelogram" << endl;
    cout << "7.Ellipse" << endl;
    cout << "8.Sector" << endl;
    int n,a,b,h,w,r;
    cout << "Enter the choice : " << endl;
    cin >> n;

    switch(n)
    {
    case 1:
    {
        cout << "Enter the base : ";
        cin >> b;
        cout << "Enter the height : ";
        cin >> h;
        float res = 0.5 * b * h;
        cout << fixed << setprecision(2) << "The area Of triangle is : " << res << endl;
        break;
    }
    case 2:
    {
        cout << "Enter the width : ";
        cin >> w;
        cout << "Enter the height : ";
        cin >> h;
        float res = w * h;
        cout << fixed << setprecision(2) << "The area Of rectangle is : " << res << endl;
        break;
    }
    case 3:
    {
        cout << "Enter the two parallel width : ";
        cin >> a >> b;
        cout << "Enter the height : ";
        cin >> h;
        float res = 0.5 * (a + b) * h;
        cout << fixed << setprecision(2) << "The area Of trapezium is : " << res << endl;
        break;
    }
    case 4:
    {
        cout << "Enter the radius : ";
        cin >> r;
        float res = 3.1416 * r * r;
        cout << fixed << setprecision(2) << "The area Of circle is : " << res << endl;
        break;
    }
    case 5:
    {
        cout << "Enter the length of side : ";
        cin >> a;
        float res = a * a;
        cout << fixed << setprecision(2) << "The area Of square is : " << res << endl;
        break;
    }
    case 6:
    {
        cout << "Enter the base : ";
        cin >> b;
        cout << "Enter the height : ";
        cin >> h;
        float res = b * h;
        cout << fixed << setprecision(2) << "The area Of parallelogram is : " << res << endl;
        break;
    }
    case 7:
    {
        cout << "Enter the intercept in x-axis : ";
        cin >> b;
        cout << "Enter the intercept in y-axis : ";
        cin >> h;
        float res = 3.1416 * b * h;
        cout << fixed << setprecision(2) << "The area Of ellipse is : " << res << endl;
        break;
    }
    case 8:
    {
        cout << "Enter the radius : ";
        cin >> r;
        cout << "Enter the angle : ";
        cin >> h;
        float res = 0.5 * b * b * h;
        cout << fixed << setprecision(2) << "The area Of sector is : " << res << endl;
        break;
    }
    }
    return 0;
}
