// File: hydrogen_hw4_task1
// Created by Carson Tyler, Daryl Adams on 10/10/2017 for CS1410
// Copyright ©2017 WSU
#include <iostream>
#include <string>
using namespace std;
// Constants, Structs, Classes
const int SIZE = 3;

class HouseInfo
{
private:
    int streetNum;
    string streetName;
    double price;
public:
    //Constructor
    HouseInfo(): streetNum(0), price(0.0){}

    void HouseInput ()
    {
        // Ask user for street number
        cout << "Please enter the street number ";
        cin >> streetNum;
        // Ask user for street name
        cout << "Please enter the street name ";
        cin >> streetName;
        cin.ignore(INT_MAX);
        // Ask user for house price
        cout << "Please enter the price ";
        cin >> streetName;
        cout << "" << endl;
    }
};
//Prototypes

// Main Program
int main()
{
    HouseInfo h1, h2, h3;                               // Declare house variables
    HouseInfo array[SIZE];                              // Declare array
    h1.HouseInput();
    h1 = array[0];

    return 0;
}
// Function Definitions
