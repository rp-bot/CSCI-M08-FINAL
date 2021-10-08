/*******************************************************************************
*  Program name: main.cpp
*  Author: ...
*  Date last updated: 10/08/2021
*  Purpose: takes the coefficients of 2 lines and then finds the intersection.
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void intersection(double A1, double B1, double C1, double A2, double B2, double C2)
{
}

int main()
{
    double line1[3], line2[3];
    char comma;
    cout << "______________Line Intersection Program______________" << endl;
    cout << "you will enter the coefficients of the line Ax + By = C";
    cout << endl
         << endl
         << "Enter the coefficients for the 1st Line [A,B,C]: ";
    cin >> line1[0] >> comma >> line1[1] >> comma >> line1[2];
    cout << endl
         << "Enter the coefficients for the 2nd Line [A,B,C]: ";
    cin >> line2[0] >> comma >> line2[1] >> comma >> line2[2];

    if ((-line1[0] / line1[1]) == (-line2[0] / line2[1]) && (line1[2] == line2[2]))
    {
        cout << endl
             << "lines are the same";
    }
    else if ((-line1[0] / line1[1]) == (-line2[0] / line2[1]) && (line1[2] != line2[2]))
    {
        cout << endl
             << "lines are parallell";
    }
    else
    {
    }
}