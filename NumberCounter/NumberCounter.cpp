// NumberCounter.cpp : Use back shoulder buttons to increment or decrement counter.
//

#include <iostream>
#include <fstream>
#include <conio.h>
#include <Windows.h>

using namespace std;


int main()
{
    int counter = 0;
    string textFile = "NUMBER.txt";

    ifstream input(textFile);
    if (input)
    {
        input >> counter;
        input.close();
    }

    cout << "Press up to increment, or down to decrement." << endl;

    while (true)
    {
        int prevInput = counter;

        int key = _getch();
        if (key == 72) counter++;
        if (key == 80) counter--;

        if (prevInput != counter)
        {
            cout << "Counter: " << counter << endl;

            ofstream output(textFile);
            output << counter;
            output.close();
        }
    }

    


}
