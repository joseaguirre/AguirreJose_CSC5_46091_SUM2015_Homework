/* File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 29, 2015, 6:16 PM
 *Purpose:  Homework, quadratic equation
 *Savitch Chapter 3 #9
 *URL: http://ideone.com/0NvZDB
 */
//System Libraries

#include <iostream> //I/O Library
#include<cmath>
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!

int main()
{
   //declare variables
   int a, b, c, dis; 
   float sqrt1, sqrt2; 
   //prompt user to enter values of a, b, and c
   cout << "This program solves quadratic equations for x, " << endl; 
   cout << "when x belongs to ax^2 + bx + c = 0 " << endl; 
   cout << "Enter a: " << endl; 
   cin >> a; 
   cout << "Enter b: " << endl; 
   cin >> b; 
   cout << "Enter c: " << endl; 
   cin >> c; 
   
   //calculate discriminant
   dis = b*b - 4*a*c;
   
   cout << "Discriminant equals: " << endl; 
   cout << dis << endl; 
   
   if(dis > 0)
   {
       //calculate sqrts
       sqrt1 = (-b + sqrt(b*b - 4*a*c))/2*a;
       sqrt2 = (-b - sqrt(b*b - 4*a*c))/2*a;
       //output sqrts
       cout << "Sqrt 1 = " << sqrt1 << endl;  
       cout << "Sqrt 2 = " << sqrt2 << endl; 
    } else if(dis == 0)
        {
           //calculate sqrts
           sqrt1 = (-b)/2.0*a;
           sqrt2 = (-b)/2.0*a;
           //output sqrts
           cout << "Sqrt 1 = " << sqrt1 << endl;  
           cout << "Sqrt 2 = " << sqrt2 << endl; 
        } else //dis < 0
            {
                dis = -1*dis; 
                cout << "Sqrt 1 and Sqrt 2 are equal to" << endl;  
                cout << "(" << -b << " +/- " << "sqrt" << "(" << dis << ")" 
                        << "i" << "/" << ")" << 2*a << endl; 
            }

}
