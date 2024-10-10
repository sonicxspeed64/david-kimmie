// OrganizeTextFileABC.cpp : Open a text file and display the contents alphabetically. Ask to save it.
// AI can suck my 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void bubbleSort(string arr[], int n) {
    for (int k = 0; k < n - 1; k++)
    {
        for (int j = 0; j < n - k - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{
    cout << "Open a .txt file and this program will organise it alphabetically." << endl << endl;

    ifstream file("ABC text test.txt"); //open this specific file
    if (!file)
    {
        cerr << "File not found!" << endl;
        return 1;
    }

    const int MAX_LINES = 10;
    string lines[MAX_LINES];
    int count = 0;

    string line;

    //read the file line by line and store in the array
    while (getline(file, line) && count < MAX_LINES)
    {
        lines[count] = line;
        count++;
    }

    file.close();

    bubbleSort(lines, count);

    //display the sorted lines
    cout << "Organized list: " << endl;
    for (int k = 0; k < count; k ++)
        cout << lines[k] << endl;



    return 0;
}

