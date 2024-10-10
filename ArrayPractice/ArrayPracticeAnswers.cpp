// ArrayPractice.cpp : Organize the integer array numerically
//

#include <iostream>
using namespace std;

int main()
{
    //declare an array to contain 4 integers, name it ringsCollected
    int ringsCollected[5];

    //initialize an array called runnerName, and give it the values "Sonic", "Tails", "Knuckles", and "Amy"
    string runnerName[] = {"Sonic", "Tails", "Knuckles", "Amy"};

    //set the first ringsCollected value to 50
    ringsCollected[0] = 50;

    //set the second ringsCollected value to the first value, multiplied by 3
    ringsCollected[1] = ringsCollected[0] * 3;

    //set the third ringsCollected value to the quotient of the second value over the first
    ringsCollected[2] = ringsCollected[1] / ringsCollected[0];

    //set the fourth ringsCollected value to -3
    ringsCollected[3] = -3;

    //print the values of ringsCollected, separated by ", ", and end with a line break
    cout << ringsCollected[0] << ", " << ringsCollected[1] << ", " << ringsCollected[2] << ", " << ringsCollected[3] << endl;

    //swap the first and second values of ringsCollected using swap()
    swap(ringsCollected[0], ringsCollected[1]);

    //make a new string variable replacement, and initialize it as "Cream". in the next line, declare an int variable spot
    string replacement = "Cream";
    int spot;

    //print the values of runnerName, separated by ", ", and end with a line break
    cout << runnerName[0] << ", " << runnerName[1] << ", " << runnerName[2] << ", " << runnerName[3] << endl;

    //make a for loop that breaks when ringsCollected[i] is less than 0. set spot to that value. hint: start with "for (int i = 0; i < 4; i++)"
    for (int i = 0; i < 4; i++)
    {
        if (ringsCollected[i] < 0)
        {
            spot = i;
            break;
        }
    }

    //replace the runner name in the spot value with the name given in the replacement variable
    runnerName[spot] = replacement;

    //change the ringsCollected value in spot to 0
    ringsCollected[spot] = 0;

    //this isn't recommended, but we're using the spot variable for something else now
    //set the value of spot to 50
    spot = 50;

    //using a for loop, add the value of spot to each of the values in ringsCollected
    for (int i = 0; i < 4; i++)
        ringsCollected[i] += spot;

    //declare an array of chars called runnerInitial, and make it five elements long
    char runnerInitial[5];

    //set the last value of runnerInitial to "Amy"[0]
    runnerInitial[4] = "Amy"[0];

    //using a for loop, set the rest of the values to the first letters of each name in runnerName
    for (int i = 0; i < 4; i++)
        runnerInitial[i] = runnerName[i][0];
    
    ringsCollected[4] = 0;

    //one line at a time, print the initial of a runner, followed by ": " and then their ringsCollected value
    for (int i = 0; i < 5; i++)
        cout << runnerInitial[i] << ", " << ringsCollected[i] << endl;

    //write "ringsCollected[4] = 0" above the for loop and edit one of the previous lines to fix the error
}

