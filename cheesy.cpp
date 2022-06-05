#include <iostream>
#include <iomanip>


using namespace std;

//constant variables
const double container = 2.76;
const double cost = 4.12;
const double profit = 1.45;

int main()
{
    //Project by Matthew Kalinin

    //format manipulating the title
    cout << setw(60) << setfill('*') << '\n' <<
    setw(45) << "Welcome to my format manipulator program" << setw(15) << '\n' <<
    setw(60) << '\n' << endl;

    //int variables for the input, calculation, and result
    int input;
    int calculation;
    int result;

    //inputting how much cheese is produced and the caclulation for result
    cout << "Please enter the total number of kilograms of cheese produced: ";
    cin >> input;
    calculation = input / container;
    result = int(calculation);

    //displaying the calculated numbers and other text with format manipulators to align numbers
    cout << "The number of containers to hold the cheese is: " << setw(30) << setfill(' ') << result << '\n' <<
    "The cost of producing " << result << " container(s) of cheese is: $" << setw(24) << result * cost << '\n' <<
    "The profit from producing " << result << " container(s) of cheese is: $" << setw(20) << result * profit << endl;

    return 0;
}