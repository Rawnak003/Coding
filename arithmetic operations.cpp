#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter the two numbers : ";
    cin >> a >> b;

    cout << setprecision(10);
    //to set the total number after and before of the point in total program.

    cout << showpoint;//to show the point.

    double sum = a + b;
    cout << setw(22) << "The summation : " << sum << endl;

    cout << noshowpoint;//to not show the point.
    double sub = a - b;
    cout << setw(22) << "The subtraction : " << sub << endl;

    double mul = a * b;
    cout << setw(22) << "The multiplication : " << mul << endl;

    cout << fixed << setprecision(3);//the number after point.
    double div = (float) a / b;
    cout << setw(22) << "The division : " << div << endl;

    int rem = a % b;
    cout << setw(22) << "The reminder : " << rem << endl;
    // setw() is used to decorate the output.

    return 0;
}
