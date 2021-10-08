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

double intersection(
    double A1, double B1, double C1, double A2, double B2, double C2,
    double y, double x)
{
     double left, right;
     left = (C2 / B2) - (C1 / B1);
     right = (-A1 / B1) + (A2 / B2);
     x = left / right;
     y = ((C1 - (A1 * x)) / B1);
     cout << endl
          << "the point of intersection: ("
          << fixed << setprecision(2) << x << ", " << y << ")";
     return 0;
}

int main()
{
     double line1[3], line2[3], y, x;
     char comma;
     string letters[3] = {"A", "B", "C"};
     cout << "______________Line Intersection Program______________" << endl;
     cout << endl
          << "you will enter the coefficients of the line Ax + By = C";
     cout << endl
          << endl;
     cout << "Enter the coefficients for the 1st Line: ";
     for (int i = 0; i < 3; i++)
     {
          cout << letters[i] << ": ";
          cin >> line1[0];
          cout << endl;
     }

     cout << "Enter the coefficients for the 2nd Line [A,B,C]: ";
     for (int i = 0; i < 3; i++)
     {

          cout << letters[i] << ": ";
          cin >> line2[0];
          cin >> line2[1];
          cin >> line2[2];
     }

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
          intersection(
              line1[0], line1[1], line1[2], line2[0], line2[1], line2[2], y, x);
     }

     cout << endl
          << endl;
}