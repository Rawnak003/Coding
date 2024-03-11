#include<bits/stdc++.h>
using namespace std;

int main()
{
    float c,f,k;
    int n;
    cout << "Menu : " << endl;
    cout << "1.Celsius to all" << endl;
    cout << "2.Fahrenheit to all" << endl;
    cout << "3.Kalvin to all" << endl;
    cout << "Enter your choice : ";
    cin >> n;

    switch(n)
    {
    case 1:
    {
        cout << "Enter the Celsius : ";
        cin >> c;
        f = (1.8 * c) + 32;
        k = c + 273;
        cout << fixed << setprecision(2) << "The Fahrenheit : " << f << endl;
        cout << fixed << setprecision(2) << "The Kalvin : " << k << endl;
        break;
    }
    case 2:
    {
        cout << "Enter the Fahrenheit : ";
        cin >> f;
        c = (f - 32) / 1.8;
        k = c + 273;
        cout << fixed << setprecision(2) << "The Celsius : " << c << endl;
        cout << fixed << setprecision(2) << "The Kalvin : " << k << endl;
        break;
    }
    case 3:
    {
        cout << "Enter the Kalvin : ";
        cin >> k;
        c = k - 273;
        f = (1.8 * c) + 32;
        cout << fixed << setprecision(2) << "The Celsius : " << c << endl;
        cout << fixed << setprecision(2) << "The Fahrenheit : " << f << endl;
        break;
    }
    }
    return 0;
}
