#include<bits/stdc++.h>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main()
{
    while(1)
    {
        int random,guess;
        cout << "Please enter a number between 1 to 5 : ";
        cin >> guess;

        random = rand()%5 + 1;

        if(guess==random)
        {
            cout << "\a" << "You have won!" << endl << endl;
        }
        else
        {
            cout << "You have lost. Please try again." << endl;
            cout << "The random number was : " << random << endl << endl;
        }
    }
    getch();
}
