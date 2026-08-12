// Parabolic Range.cpp : just a downwards parabola sorry

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double frames, xdis, ydis;
    char redo;

    while (true)
    {
        redo = 'n';

        cout << "How many frames? ";
        cin >> frames;

        do
        {
            cout << "X distance: ";
            cin >> xdis;
            cout << "Y distance: ";
            cin >> ydis;

            cout << "Formula: -" << xdis << "/" << frames * frames << "*(x-" << frames << ")^2 + " << xdis << "\n";
            cout << "Formula: -" << ydis << "/" << frames * frames << "*(y-" << frames << ")^2 + " << ydis << "\n\n";

            for (int k = 1; k <= frames; k++)
            {
                cout << k << ": X: " << setw(10) << xdis - xdis * pow(k - frames, 2.0) / pow(frames, 2.0) << "   Y: " << setw(10) << ydis - ydis * pow(k - frames, 2.0) / pow(frames, 2.0) << "\n";
            }

            cout << "\ny or Y to choose new distances ";
            cin >> redo;
        } while (redo == 'y' || redo == 'Y');

        do
        {
            if (redo == 'T' || redo == 't')
            {
                cout << "How many frames? ";
                cin >> frames;

                cout << "Distance to have a slow start and slow end: ";
                cin >> ydis;

                cout << "First half: 2x^2/" << frames * frames << "*" << ydis << "\n";
                cout << "Second half: -2(x-" << ydis << ")^2/" << frames * frames << "*" << ydis << "*(x-" << frames << ")^2 + " << ydis << "\n\n";

                for (int k = 1; k <= frames; k++)
                {
                    if (k <= frames / 2)
                        cout << k << ": " << ydis * 2 * pow(k, 2.0) / pow(frames, 2.0) << "\n";
                    else
                        cout << k << ": " << ydis - ydis * 2 * pow(k - frames, 2.0) / pow(frames, 2.0) << "\n";
                }
            }

            cout << "\nt or T to choose do another slow ends formula ";
            cin >> redo;
        } while (redo == 't' || redo == 'T');
    }

}