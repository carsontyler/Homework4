// File: hydrogen_hw4_task1
// Created by Carson Tyler, Daryl Adams on 10/10/2017 for CS1410
// Copyright ©2017 WSU
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 3;

// Constants, Structs, Classes
class HouseInfo
{
private:
    int streetNum;
    string streetName;
    double price;
public:
    //Constructor
    HouseInfo(): streetNum(0), price(0.0){}
};
//Prototypes
void HouseInput(HouseInfo array[SIZE]);
void ShowHouse(HouseInfo array[SIZE]);
int ComparePrices(HouseInfo array[SIZE]);
// Main Program
int main()
{
    HouseInfo h1;                               // Declare house variables
    HouseInfo array[SIZE];                      // Declare array
    HouseInput(array);
    h1 = array[0];

    return 0;
}
// Function Definitions
void HouseInput(HouseInfo array[SIZE])
{
    for(int i = 0; i <SIZE; i++)
    {
        // Ask user for street number
        cout << "Please enter the street number ";
        cin >> array[i];
        // Ask user for street name
        cout << "Please enter the street name ";
        cin >> array[i];
        // Ask user for house price
        cout << "Please enter the price ";
        cin >> array[i];
        cout << "" << endl;

    }



}
void ShowHouse(HouseInfo array[SIZE])
{

}
int ComparePrices(HouseInfo array[SIZE])
{

}