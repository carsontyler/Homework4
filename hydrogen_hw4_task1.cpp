// File: hydrogen_hw4_task1
// Created by Carson Tyler, Daryl Adams on 10/10/2017 for CS1410
// Copyright ©2017 WSU
#include <iostream>
#include <string>
using namespace std;
// Constants, Structs, Classes
const int SIZE = 3;
const int MAX = 1;

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
        cin.ignore(MAX);
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
    h1 = array[0];

    //Get user info for the first
    cout << "Enter info for first house\n";
    h1.HouseInput();

    cout << "\nEnter info for second house\n";
    h2.HouseInput();

    cout << "\nEnter info for third house\n";
    h3.HouseInput();


    return 0;
}
// Function Definitions
