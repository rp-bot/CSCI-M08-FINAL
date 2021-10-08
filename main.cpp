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
          << fixed << setprecision(1) << x << ", " << y << ")";
     return 0;
}

int main()
{
     double line1[3], line2[3], y, x;
     char comma;
     string letters[3] = {"A", "B", "C"};
     cout << "_______________Line Intersection Program_______________" << endl;
     cout << endl
          << "you will enter the coefficients of the line Ax + By = C";
     cout << endl
          << endl;
     cout << "Enter the coefficients for the 1st Line: " << endl;
     for (int i = 0; i < 3; i++)
     {
          cout << letters[i] << ": ";
          cin >> line1[i];
          cout << endl;
     }

     cout << "Enter the coefficients for the 2nd Line: " << endl;
     for (int i = 0; i < 3; i++)
     {
          cout << letters[i] << ": ";
          cin >> line2[i];
          cout << endl;
     }

     cout << "line 1: " << line1[0] << "x + " << line1[1] << "y = " << line1[2];
     cout << endl
          << "line 2: " << line2[0] << "x + " << line2[1] << "y = " << line2[2]
          << endl;
     if ((-line1[0] / line1[1]) == (-line2[0] / line2[1]) && (line1[2] == line2[2]))
     {
          cout << endl
               << "lines are the same";
     }
     else if ((-line1[0] / line1[1]) == (-line2[0] / line2[1]) && (line1[2] != line2[2]))
     {
          cout << endl
               << "lines are Parallel";
     }
     else
     {
          intersection(
              line1[0], line1[1], line1[2], line2[0], line2[1], line2[2], y, x);
     }

     cout << endl
          << endl;
}