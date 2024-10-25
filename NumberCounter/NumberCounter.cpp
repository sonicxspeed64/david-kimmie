// NumberCounter.cpp : Use up or down to increment or decrement counter.
//

#include <iostream>
#include <fstream>
#include <conio.h>
#include <Windows.h>

using namespace std;

#define CountUp 72
#define CountDown 80


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
        if (key == CountUp) counter++;
        if (key == CountDown) counter--;

        if (prevInput != counter)
        {
            cout << "Counter: " << counter << endl;

            ofstream output(textFile);
            output << counter;
            output.close();
        }
    }

    


}
