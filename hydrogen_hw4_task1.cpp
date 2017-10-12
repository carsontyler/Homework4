// File: hydrogen_hw4_task1
// Created by Carson Tyler, Daryl Adams on 10/10/2017 for CS1410
// Copyright ©2017 WSU
#include <iostream>
#include <string>
using namespace std;

// Constants, Structs, Classes
const int SIZE = 2;
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

    void HouseInput()
    {
        // Ask user for street number
        cout << "\nPlease enter the street number: ";
        cin >> streetNum;
        // Ask user for street name
        cout << "Please enter the street name: ";
        cin >> streetName;
        cin.ignore(MAX);
        // Ask user for house price
        cout << "Please enter the price: ";
        cin >> price;
        cout << "" << endl;
    }
    void HouseOutput()
    {
        cout << streetNum << " " << streetName << " for $["<< price << "]" << endl;
    }
    double DisplayPrice()
    {
       return price;
    }
};
//Prototypes
void comparePrices(HouseInfo arr[]);

// Main Program
int main()
{
    HouseInfo h1, h2, h3;
    HouseInfo array[SIZE];                              // Declare array
    cout << "Enter info for the first house ";
    h1.HouseInput();
    array[0] = h1;
    cout << "Enter info for the second house ";
    h2.HouseInput();
    array[1] = h2;
    cout << "Enter info for the third house ";
    h3.HouseInput();
    array[2] = h3;

    cout << "Your Market analysis is as follows: " << endl;
    for (int j = 0; j <= SIZE; j++)
    {
        cout << j + 1 << " house at "; array[j].HouseOutput();
    }

    comparePrices(array);

    return 0;
}

// Function Definitions
void comparePrices(HouseInfo arr[])
{
    if (arr[0].DisplayPrice() < arr[1].DisplayPrice())
    {
        if (arr[0].DisplayPrice() < arr[2].DisplayPrice())
            cout << "You should buy: House Number 1" << endl;
        else  if (arr[0].DisplayPrice() > arr[2].DisplayPrice())
            cout << "You should buy: House Number 3" << endl;
        else if (arr[0].DisplayPrice() == arr[2].DisplayPrice())
            cout << "You should buy: House Number 1\nHouse Number 3" << endl;
    }
    else if (arr[1].DisplayPrice() < arr[0].DisplayPrice())
    {
        if (arr[1].DisplayPrice() < arr[2].DisplayPrice())
            cout << "You should buy: House Number 2" << endl;
        else if (arr[2].DisplayPrice() < arr[1].DisplayPrice())
            cout << "You should buy: House Number 3" << endl;
        else if (arr[1].DisplayPrice() == arr[2].DisplayPrice())
            cout << "You should buy: House Number 2\nHouse Number 3" << endl;
    }
    else if (arr[0].DisplayPrice() == arr[1].DisplayPrice())
    {
        cout << "You should buy: House Number 1\nHouse Number 2" << endl;
        if (arr[0].DisplayPrice() == arr[2].DisplayPrice())
            cout << "House Number 3" << endl;
    }
    else
    {
        cout << "Internal error, please try again" << endl;
    }
}