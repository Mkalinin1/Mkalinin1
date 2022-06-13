//using iostream, io manipulators, strings, and file streams
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

//Week 3 assignment Matthew K
using namespace std;

//const variable for the file output
const string outputFile = "order.txt";

int main()
{
    //variables for the program
    string item;
    char fragile;
    double orderPrice = 0;
    double shipRate = 0;
    double orderTotal = 0;
    string destination;
    ofstream fileOutStream;
    //initializing output file stream variable and opening it
    fileOutStream.open(outputFile);

    //format manipulating the title
    cout << setw(60) << setfill('.') << '\n' << "ITCS 2530 - Programming Assignment for week #3" << '\n' << setw(60) << '\n' << endl;

    //inputing item name, if it is fragile
    cout << "Please enter the item name (no spaces)" << setw(10) << ":";
    cin >> item;
    cout << "Is the item fragile? (y=yes/n=no)" << setw(15) << ":";
    cin >> fragile;

    //if statement for the yes/no question
    if ( fragile != 'y' && fragile !='n' && fragile != 'Y' && fragile != 'N') {
        cout << "Invalid entry, exiting";
        return 0;
    }
    //if and else if statement for adding fragile cost to shipping or not
    if (fragile == 'y' && 'Y') {
        shipRate = shipRate + 2;
    }

    else if (fragile == 'n' && 'N') {
        shipRate = shipRate + 0;
    }

    //inputing order total and destination of order
    cout << "Please enter your order total" << setw(19) << ":";
    cin >> orderPrice;

    cout << "Please enter destination. (usa/can/aus/mars)" << setw(9) << ":";
    cin >> destination;
    
    //if and else if statements calculating shipping price and total order price
    if (orderPrice <= 50 && destination == "usa") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 6;
        
    }
    else if (orderPrice > 50 && orderPrice <= 100 && destination == "usa") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 9;
    }
    else if (orderPrice > 100 && orderPrice <= 150 && destination == "usa") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 12;
    }
    else if (orderPrice > 150 && destination == "usa") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 0;
    }

    if (orderPrice <= 50 && destination == "can") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 8;
    }
    else if (orderPrice > 50 && orderPrice <= 100 && destination == "can") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 12;
    }
    else if (orderPrice > 100 && orderPrice <= 150 && destination == "can") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 15;
    }
    else if (orderPrice > 150 && destination == "can") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 0;
    }

    if (orderPrice <= 50 && destination == "aus") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 10;
    }
    else if (orderPrice > 50 && orderPrice <= 100 && destination == "aus") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 14;
    }
    else if (orderPrice > 100 && orderPrice <= 150 && destination == "aus") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 17;
    }
    else if (orderPrice > 150 && destination == "aus") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 0;
    }

    if (orderPrice <= 50 && destination == "mars") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 50;
    }
    else if (orderPrice > 50 && orderPrice <= 100 && destination == "mars") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 100;
    }
    else if (orderPrice > 100 && orderPrice <= 150 && destination == "mars") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 150;
    }
    else if (orderPrice > 150 && destination == "mars") {
        orderTotal = orderTotal + orderPrice;
        shipRate = shipRate + 200;
    }

    //displaying the item, shipping cost, shipping destination, and the total costs altogether
    cout << "\nYour item is" << setw(29) << item << endl;
    cout << "Your shipping cost is " << setw(19)  << shipRate << endl;
    cout << "You are shipping to " << setw(23) << destination << endl;
    orderTotal = orderTotal + shipRate;
    cout << "Your total shipping costs are " << setw(12) << orderTotal << endl;

    //outputting the data into order.txt
    fileOutStream << "\nYour item is" << setw(46) << item << endl;
    fileOutStream << "Your shipping cost is " << setw(20) << shipRate << endl;
    fileOutStream << "You are shipping to " << setw(23) << destination << endl;
    fileOutStream << "Your total shipping costs are " << setw(16) << orderTotal << endl;
    
    //output stream closes
    fileOutStream.close();
    return 0;
}
