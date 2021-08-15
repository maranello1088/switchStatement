// switchStatement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char letter_grade{};
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch (letter_grade) {
    case 'A':
    case 'a':
        cout << "You would need a 90 or above"; break;

    case 'B':
    case 'b':
        cout << "You would need an 80 up until 89"; break;

    case 'C':
    case 'c':
        cout << "A 70 up to 79 would do for a C. Do you really want this? You can do a lot better!"; break;

    case 'D':
    case 'd':
        cout << "Hmm, you should strive for a better grade. All you need is 60-69"; break;

    case 'F':
    case 'f':
    {
        char confirm{};

        cout << "Are you sure you want an F (Y/N)?:" << endl;
        cin >> confirm;

        if (confirm == 'Y' or confirm == 'y')
            cout << "Then I guess you just didn't study. Have you become tired of school?" << endl;

        else if (confirm == 'N' or confirm == 'n')
            cout << "I thought as much, please go study and get a great grade, you can do this!!!" << endl;

        else
            cout << "Illegal choice" << endl;
        break;


    }
    default:
        cout << "Sorry not a valid grade" << endl;
    }

    cout << endl;
    return 0;
}

































































// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
